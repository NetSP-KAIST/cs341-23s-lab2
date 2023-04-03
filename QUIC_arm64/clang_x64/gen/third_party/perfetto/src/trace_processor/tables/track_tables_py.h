#ifndef THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_TRACK_TABLES_PY_H_
#define THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_TRACK_TABLES_PY_H_

#include "src/trace_processor/tables/macros.h"



namespace perfetto {
namespace trace_processor {
namespace tables {

class TrackTable : public macros_internal::MacroTable {
 public:
  struct Id : public BaseId {
    Id() = default;
    explicit constexpr Id(uint32_t v) : BaseId(v) {}
  };
  static_assert(std::is_trivially_destructible<Id>::value,
                "Inheritance used without trivial destruction");
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
  };
  struct ColumnType {
    using id = IdColumn<TrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<TrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
  };
  struct Row : public macros_internal::RootParentTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<TrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        std::nullptr_t = nullptr)
        : macros_internal::RootParentTable::Row(),
          name(std::move(in_name)),
          parent_id(std::move(in_parent_id)),
          source_arg_set_id(std::move(in_source_arg_set_id)) {
      type_ = "track";
    }
    StringPool::Id name;
    base::Optional<TrackTable::Id> parent_id;
    base::Optional<uint32_t> source_arg_set_id;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t name = ColumnType::name::default_flags();
    static constexpr uint32_t parent_id = ColumnType::parent_id::default_flags();
    static constexpr uint32_t source_arg_set_id = ColumnType::source_arg_set_id::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      TrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    TrackTable, RowNumber> {
   public:
    ConstRowReference(const TrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const TrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }

   private:
    TrackTable* mutable_table() const {
      return const_cast<TrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit TrackTable(StringPool* pool)
      : macros_internal::MacroTable(pool, nullptr),
        name_(ColumnStorage<ColumnType::name::stored_type>::Create<false>()),
        parent_id_(ColumnStorage<ColumnType::parent_id::stored_type>::Create<false>()),
        source_arg_set_id_(ColumnStorage<ColumnType::source_arg_set_id::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("name", &name_, ColumnFlag::name,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("parent_id", &parent_id_, ColumnFlag::parent_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("source_arg_set_id", &source_arg_set_id_, ColumnFlag::source_arg_set_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~TrackTable() override;

  static const char* Name() { return "track"; }

  void ShrinkToFit() {
    type_.ShrinkToFit();
    name_.ShrinkToFit();
    parent_id_.ShrinkToFit();
    source_arg_set_id_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{row_number};
    type_.Append(string_pool_->InternString(row.type()));
    mutable_name()->Append(std::move(row.name));
    mutable_parent_id()->Append(std::move(row.parent_id));
    mutable_source_arg_set_id()->Append(std::move(row.source_arg_set_id));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<TrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<TrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<TrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }

 private:
  
  ColumnStorage<ColumnType::name::stored_type> name_;
  ColumnStorage<ColumnType::parent_id::stored_type> parent_id_;
  ColumnStorage<ColumnType::source_arg_set_id::stored_type> source_arg_set_id_;
};
  

class CounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = TrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
  };
  struct ColumnType {
    using id = IdColumn<CounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<CounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
  };
  struct Row : public TrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<CounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        std::nullptr_t = nullptr)
        : TrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id)),
          unit(std::move(in_unit)),
          description(std::move(in_description)) {
      type_ = "counter_track";
    }
    StringPool::Id unit;
    StringPool::Id description;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t unit = ColumnType::unit::default_flags();
    static constexpr uint32_t description = ColumnType::description::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      CounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    CounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const CounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const CounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }

   private:
    CounterTrackTable* mutable_table() const {
      return const_cast<CounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit CounterTrackTable(StringPool* pool, TrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), unit_(ColumnStorage<ColumnType::unit::stored_type>::Create<false>()),
        description_(ColumnStorage<ColumnType::description::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("unit", &unit_, ColumnFlag::unit,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("description", &description_, ColumnFlag::description,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~CounterTrackTable() override;

  static const char* Name() { return "counter_track"; }

  void ShrinkToFit() {
    unit_.ShrinkToFit();
    description_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_unit()->Append(std::move(row.unit));
    mutable_description()->Append(std::move(row.description));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<CounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<CounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<CounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }

 private:
  TrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::unit::stored_type> unit_;
  ColumnStorage<ColumnType::description::stored_type> description_;
};
  

class CpuCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t cpu = 7;
  };
  struct ColumnType {
    using id = IdColumn<CpuCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<CpuCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using cpu = TypedColumn<uint32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<CpuCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        uint32_t in_cpu = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          cpu(std::move(in_cpu)) {
      type_ = "cpu_counter_track";
    }
    uint32_t cpu;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t cpu = ColumnType::cpu::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      CpuCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    CpuCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const CpuCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::cpu::type cpu() const {
      return table_->cpu()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const CpuCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_cpu(
        ColumnType::cpu::non_optional_type v) {
      return mutable_table()->mutable_cpu()->Set(row_number_, v);
    }

   private:
    CpuCounterTrackTable* mutable_table() const {
      return const_cast<CpuCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit CpuCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), cpu_(ColumnStorage<ColumnType::cpu::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("cpu", &cpu_, ColumnFlag::cpu,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~CpuCounterTrackTable() override;

  static const char* Name() { return "cpu_counter_track"; }

  void ShrinkToFit() {
    cpu_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_cpu()->Append(std::move(row.cpu));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<CpuCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<CpuCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<uint32_t>& cpu() const {
    return static_cast<const ColumnType::cpu&>(columns_[ColumnIndex::cpu]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<CpuCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<uint32_t>* mutable_cpu() {
    return static_cast<ColumnType::cpu*>(
        &columns_[ColumnIndex::cpu]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::cpu::stored_type> cpu_;
};
  

class CpuTrackTable : public macros_internal::MacroTable {
 public:
  using Id = TrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t cpu = 5;
  };
  struct ColumnType {
    using id = IdColumn<CpuTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<CpuTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using cpu = TypedColumn<uint32_t>;
  };
  struct Row : public TrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<CpuTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        uint32_t in_cpu = {},
        std::nullptr_t = nullptr)
        : TrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id)),
          cpu(std::move(in_cpu)) {
      type_ = "cpu_track";
    }
    uint32_t cpu;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t cpu = ColumnType::cpu::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      CpuTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    CpuTrackTable, RowNumber> {
   public:
    ConstRowReference(const CpuTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::cpu::type cpu() const {
      return table_->cpu()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const CpuTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_cpu(
        ColumnType::cpu::non_optional_type v) {
      return mutable_table()->mutable_cpu()->Set(row_number_, v);
    }

   private:
    CpuTrackTable* mutable_table() const {
      return const_cast<CpuTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit CpuTrackTable(StringPool* pool, TrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), cpu_(ColumnStorage<ColumnType::cpu::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("cpu", &cpu_, ColumnFlag::cpu,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~CpuTrackTable() override;

  static const char* Name() { return "cpu_track"; }

  void ShrinkToFit() {
    cpu_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_cpu()->Append(std::move(row.cpu));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<CpuTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<CpuTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<uint32_t>& cpu() const {
    return static_cast<const ColumnType::cpu&>(columns_[ColumnIndex::cpu]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<CpuTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<uint32_t>* mutable_cpu() {
    return static_cast<ColumnType::cpu*>(
        &columns_[ColumnIndex::cpu]);
  }

 private:
  TrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::cpu::stored_type> cpu_;
};
  

class EnergyCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t consumer_id = 7;
    static constexpr uint32_t consumer_type = 8;
    static constexpr uint32_t ordinal = 9;
  };
  struct ColumnType {
    using id = IdColumn<EnergyCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<EnergyCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using consumer_id = TypedColumn<int32_t>;
    using consumer_type = TypedColumn<StringPool::Id>;
    using ordinal = TypedColumn<int32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<EnergyCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        int32_t in_consumer_id = {},
        StringPool::Id in_consumer_type = {},
        int32_t in_ordinal = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          consumer_id(std::move(in_consumer_id)),
          consumer_type(std::move(in_consumer_type)),
          ordinal(std::move(in_ordinal)) {
      type_ = "energy_counter_track";
    }
    int32_t consumer_id;
    StringPool::Id consumer_type;
    int32_t ordinal;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t consumer_id = ColumnType::consumer_id::default_flags();
    static constexpr uint32_t consumer_type = ColumnType::consumer_type::default_flags();
    static constexpr uint32_t ordinal = ColumnType::ordinal::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      EnergyCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    EnergyCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const EnergyCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::consumer_id::type consumer_id() const {
      return table_->consumer_id()[row_number_];
    }
    ColumnType::consumer_type::type consumer_type() const {
      return table_->consumer_type()[row_number_];
    }
    ColumnType::ordinal::type ordinal() const {
      return table_->ordinal()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const EnergyCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_consumer_id(
        ColumnType::consumer_id::non_optional_type v) {
      return mutable_table()->mutable_consumer_id()->Set(row_number_, v);
    }
    void set_consumer_type(
        ColumnType::consumer_type::non_optional_type v) {
      return mutable_table()->mutable_consumer_type()->Set(row_number_, v);
    }
    void set_ordinal(
        ColumnType::ordinal::non_optional_type v) {
      return mutable_table()->mutable_ordinal()->Set(row_number_, v);
    }

   private:
    EnergyCounterTrackTable* mutable_table() const {
      return const_cast<EnergyCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit EnergyCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), consumer_id_(ColumnStorage<ColumnType::consumer_id::stored_type>::Create<false>()),
        consumer_type_(ColumnStorage<ColumnType::consumer_type::stored_type>::Create<false>()),
        ordinal_(ColumnStorage<ColumnType::ordinal::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("consumer_id", &consumer_id_, ColumnFlag::consumer_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("consumer_type", &consumer_type_, ColumnFlag::consumer_type,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("ordinal", &ordinal_, ColumnFlag::ordinal,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~EnergyCounterTrackTable() override;

  static const char* Name() { return "energy_counter_track"; }

  void ShrinkToFit() {
    consumer_id_.ShrinkToFit();
    consumer_type_.ShrinkToFit();
    ordinal_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_consumer_id()->Append(std::move(row.consumer_id));
    mutable_consumer_type()->Append(std::move(row.consumer_type));
    mutable_ordinal()->Append(std::move(row.ordinal));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<EnergyCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<EnergyCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<int32_t>& consumer_id() const {
    return static_cast<const ColumnType::consumer_id&>(columns_[ColumnIndex::consumer_id]);
  }
  const TypedColumn<StringPool::Id>& consumer_type() const {
    return static_cast<const ColumnType::consumer_type&>(columns_[ColumnIndex::consumer_type]);
  }
  const TypedColumn<int32_t>& ordinal() const {
    return static_cast<const ColumnType::ordinal&>(columns_[ColumnIndex::ordinal]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<EnergyCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<int32_t>* mutable_consumer_id() {
    return static_cast<ColumnType::consumer_id*>(
        &columns_[ColumnIndex::consumer_id]);
  }
  TypedColumn<StringPool::Id>* mutable_consumer_type() {
    return static_cast<ColumnType::consumer_type*>(
        &columns_[ColumnIndex::consumer_type]);
  }
  TypedColumn<int32_t>* mutable_ordinal() {
    return static_cast<ColumnType::ordinal*>(
        &columns_[ColumnIndex::ordinal]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::consumer_id::stored_type> consumer_id_;
  ColumnStorage<ColumnType::consumer_type::stored_type> consumer_type_;
  ColumnStorage<ColumnType::ordinal::stored_type> ordinal_;
};
  

class UidCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t uid = 7;
  };
  struct ColumnType {
    using id = IdColumn<UidCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<UidCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using uid = TypedColumn<int32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<UidCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        int32_t in_uid = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          uid(std::move(in_uid)) {
      type_ = "uid_counter_track";
    }
    int32_t uid;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t uid = ColumnType::uid::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      UidCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    UidCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const UidCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::uid::type uid() const {
      return table_->uid()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const UidCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_uid(
        ColumnType::uid::non_optional_type v) {
      return mutable_table()->mutable_uid()->Set(row_number_, v);
    }

   private:
    UidCounterTrackTable* mutable_table() const {
      return const_cast<UidCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit UidCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), uid_(ColumnStorage<ColumnType::uid::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("uid", &uid_, ColumnFlag::uid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~UidCounterTrackTable() override;

  static const char* Name() { return "uid_counter_track"; }

  void ShrinkToFit() {
    uid_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_uid()->Append(std::move(row.uid));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<UidCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<UidCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<int32_t>& uid() const {
    return static_cast<const ColumnType::uid&>(columns_[ColumnIndex::uid]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<UidCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<int32_t>* mutable_uid() {
    return static_cast<ColumnType::uid*>(
        &columns_[ColumnIndex::uid]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::uid::stored_type> uid_;
};
  

class EnergyPerUidCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = UidCounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t uid = 7;
    static constexpr uint32_t consumer_id = 8;
  };
  struct ColumnType {
    using id = IdColumn<EnergyPerUidCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<EnergyPerUidCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using uid = TypedColumn<int32_t>;
    using consumer_id = TypedColumn<int32_t>;
  };
  struct Row : public UidCounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<EnergyPerUidCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        int32_t in_uid = {},
        int32_t in_consumer_id = {},
        std::nullptr_t = nullptr)
        : UidCounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description), std::move(in_uid)),
          consumer_id(std::move(in_consumer_id)) {
      type_ = "energy_per_uid_counter_track";
    }
    int32_t consumer_id;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t consumer_id = ColumnType::consumer_id::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      EnergyPerUidCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    EnergyPerUidCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const EnergyPerUidCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::uid::type uid() const {
      return table_->uid()[row_number_];
    }
    ColumnType::consumer_id::type consumer_id() const {
      return table_->consumer_id()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const EnergyPerUidCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_uid(
        ColumnType::uid::non_optional_type v) {
      return mutable_table()->mutable_uid()->Set(row_number_, v);
    }
    void set_consumer_id(
        ColumnType::consumer_id::non_optional_type v) {
      return mutable_table()->mutable_consumer_id()->Set(row_number_, v);
    }

   private:
    EnergyPerUidCounterTrackTable* mutable_table() const {
      return const_cast<EnergyPerUidCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit EnergyPerUidCounterTrackTable(StringPool* pool, UidCounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), consumer_id_(ColumnStorage<ColumnType::consumer_id::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("consumer_id", &consumer_id_, ColumnFlag::consumer_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~EnergyPerUidCounterTrackTable() override;

  static const char* Name() { return "energy_per_uid_counter_track"; }

  void ShrinkToFit() {
    consumer_id_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_consumer_id()->Append(std::move(row.consumer_id));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<EnergyPerUidCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<EnergyPerUidCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<int32_t>& uid() const {
    return static_cast<const ColumnType::uid&>(columns_[ColumnIndex::uid]);
  }
  const TypedColumn<int32_t>& consumer_id() const {
    return static_cast<const ColumnType::consumer_id&>(columns_[ColumnIndex::consumer_id]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<EnergyPerUidCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<int32_t>* mutable_uid() {
    return static_cast<ColumnType::uid*>(
        &columns_[ColumnIndex::uid]);
  }
  TypedColumn<int32_t>* mutable_consumer_id() {
    return static_cast<ColumnType::consumer_id*>(
        &columns_[ColumnIndex::consumer_id]);
  }

 private:
  UidCounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::consumer_id::stored_type> consumer_id_;
};
  

class GpuCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t gpu_id = 7;
  };
  struct ColumnType {
    using id = IdColumn<GpuCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<GpuCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using gpu_id = TypedColumn<uint32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<GpuCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        uint32_t in_gpu_id = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          gpu_id(std::move(in_gpu_id)) {
      type_ = "gpu_counter_track";
    }
    uint32_t gpu_id;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t gpu_id = ColumnType::gpu_id::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      GpuCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    GpuCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const GpuCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::gpu_id::type gpu_id() const {
      return table_->gpu_id()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const GpuCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_gpu_id(
        ColumnType::gpu_id::non_optional_type v) {
      return mutable_table()->mutable_gpu_id()->Set(row_number_, v);
    }

   private:
    GpuCounterTrackTable* mutable_table() const {
      return const_cast<GpuCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit GpuCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), gpu_id_(ColumnStorage<ColumnType::gpu_id::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("gpu_id", &gpu_id_, ColumnFlag::gpu_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~GpuCounterTrackTable() override;

  static const char* Name() { return "gpu_counter_track"; }

  void ShrinkToFit() {
    gpu_id_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_gpu_id()->Append(std::move(row.gpu_id));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<GpuCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<GpuCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<uint32_t>& gpu_id() const {
    return static_cast<const ColumnType::gpu_id&>(columns_[ColumnIndex::gpu_id]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<GpuCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<uint32_t>* mutable_gpu_id() {
    return static_cast<ColumnType::gpu_id*>(
        &columns_[ColumnIndex::gpu_id]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::gpu_id::stored_type> gpu_id_;
};
  

class GpuTrackTable : public macros_internal::MacroTable {
 public:
  using Id = TrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t scope = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t context_id = 7;
  };
  struct ColumnType {
    using id = IdColumn<GpuTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<GpuTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using scope = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using context_id = TypedColumn<base::Optional<int64_t>>;
  };
  struct Row : public TrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<GpuTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_scope = {},
        StringPool::Id in_description = {},
        base::Optional<int64_t> in_context_id = {},
        std::nullptr_t = nullptr)
        : TrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id)),
          scope(std::move(in_scope)),
          description(std::move(in_description)),
          context_id(std::move(in_context_id)) {
      type_ = "gpu_track";
    }
    StringPool::Id scope;
    StringPool::Id description;
    base::Optional<int64_t> context_id;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t scope = ColumnType::scope::default_flags();
    static constexpr uint32_t description = ColumnType::description::default_flags();
    static constexpr uint32_t context_id = ColumnType::context_id::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      GpuTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    GpuTrackTable, RowNumber> {
   public:
    ConstRowReference(const GpuTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::scope::type scope() const {
      return table_->scope()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::context_id::type context_id() const {
      return table_->context_id()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const GpuTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_scope(
        ColumnType::scope::non_optional_type v) {
      return mutable_table()->mutable_scope()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_context_id(
        ColumnType::context_id::non_optional_type v) {
      return mutable_table()->mutable_context_id()->Set(row_number_, v);
    }

   private:
    GpuTrackTable* mutable_table() const {
      return const_cast<GpuTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit GpuTrackTable(StringPool* pool, TrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), scope_(ColumnStorage<ColumnType::scope::stored_type>::Create<false>()),
        description_(ColumnStorage<ColumnType::description::stored_type>::Create<false>()),
        context_id_(ColumnStorage<ColumnType::context_id::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("scope", &scope_, ColumnFlag::scope,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("description", &description_, ColumnFlag::description,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("context_id", &context_id_, ColumnFlag::context_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~GpuTrackTable() override;

  static const char* Name() { return "gpu_track"; }

  void ShrinkToFit() {
    scope_.ShrinkToFit();
    description_.ShrinkToFit();
    context_id_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_scope()->Append(std::move(row.scope));
    mutable_description()->Append(std::move(row.description));
    mutable_context_id()->Append(std::move(row.context_id));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<GpuTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<GpuTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& scope() const {
    return static_cast<const ColumnType::scope&>(columns_[ColumnIndex::scope]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<base::Optional<int64_t>>& context_id() const {
    return static_cast<const ColumnType::context_id&>(columns_[ColumnIndex::context_id]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<GpuTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_scope() {
    return static_cast<ColumnType::scope*>(
        &columns_[ColumnIndex::scope]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<base::Optional<int64_t>>* mutable_context_id() {
    return static_cast<ColumnType::context_id*>(
        &columns_[ColumnIndex::context_id]);
  }

 private:
  TrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::scope::stored_type> scope_;
  ColumnStorage<ColumnType::description::stored_type> description_;
  ColumnStorage<ColumnType::context_id::stored_type> context_id_;
};
  

class IrqCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t irq = 7;
  };
  struct ColumnType {
    using id = IdColumn<IrqCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<IrqCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using irq = TypedColumn<int32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<IrqCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        int32_t in_irq = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          irq(std::move(in_irq)) {
      type_ = "irq_counter_track";
    }
    int32_t irq;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t irq = ColumnType::irq::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      IrqCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    IrqCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const IrqCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::irq::type irq() const {
      return table_->irq()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const IrqCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_irq(
        ColumnType::irq::non_optional_type v) {
      return mutable_table()->mutable_irq()->Set(row_number_, v);
    }

   private:
    IrqCounterTrackTable* mutable_table() const {
      return const_cast<IrqCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit IrqCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), irq_(ColumnStorage<ColumnType::irq::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("irq", &irq_, ColumnFlag::irq,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~IrqCounterTrackTable() override;

  static const char* Name() { return "irq_counter_track"; }

  void ShrinkToFit() {
    irq_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_irq()->Append(std::move(row.irq));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<IrqCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<IrqCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<int32_t>& irq() const {
    return static_cast<const ColumnType::irq&>(columns_[ColumnIndex::irq]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<IrqCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<int32_t>* mutable_irq() {
    return static_cast<ColumnType::irq*>(
        &columns_[ColumnIndex::irq]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::irq::stored_type> irq_;
};
  

class PerfCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t perf_session_id = 7;
    static constexpr uint32_t cpu = 8;
    static constexpr uint32_t is_timebase = 9;
  };
  struct ColumnType {
    using id = IdColumn<PerfCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<PerfCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using perf_session_id = TypedColumn<uint32_t>;
    using cpu = TypedColumn<uint32_t>;
    using is_timebase = TypedColumn<uint32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<PerfCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        uint32_t in_perf_session_id = {},
        uint32_t in_cpu = {},
        uint32_t in_is_timebase = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          perf_session_id(std::move(in_perf_session_id)),
          cpu(std::move(in_cpu)),
          is_timebase(std::move(in_is_timebase)) {
      type_ = "perf_counter_track";
    }
    uint32_t perf_session_id;
    uint32_t cpu;
    uint32_t is_timebase;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t perf_session_id = ColumnType::perf_session_id::default_flags();
    static constexpr uint32_t cpu = ColumnType::cpu::default_flags();
    static constexpr uint32_t is_timebase = ColumnType::is_timebase::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      PerfCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    PerfCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const PerfCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::perf_session_id::type perf_session_id() const {
      return table_->perf_session_id()[row_number_];
    }
    ColumnType::cpu::type cpu() const {
      return table_->cpu()[row_number_];
    }
    ColumnType::is_timebase::type is_timebase() const {
      return table_->is_timebase()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const PerfCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_perf_session_id(
        ColumnType::perf_session_id::non_optional_type v) {
      return mutable_table()->mutable_perf_session_id()->Set(row_number_, v);
    }
    void set_cpu(
        ColumnType::cpu::non_optional_type v) {
      return mutable_table()->mutable_cpu()->Set(row_number_, v);
    }
    void set_is_timebase(
        ColumnType::is_timebase::non_optional_type v) {
      return mutable_table()->mutable_is_timebase()->Set(row_number_, v);
    }

   private:
    PerfCounterTrackTable* mutable_table() const {
      return const_cast<PerfCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit PerfCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), perf_session_id_(ColumnStorage<ColumnType::perf_session_id::stored_type>::Create<false>()),
        cpu_(ColumnStorage<ColumnType::cpu::stored_type>::Create<false>()),
        is_timebase_(ColumnStorage<ColumnType::is_timebase::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("perf_session_id", &perf_session_id_, ColumnFlag::perf_session_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("cpu", &cpu_, ColumnFlag::cpu,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
    columns_.emplace_back("is_timebase", &is_timebase_, ColumnFlag::is_timebase,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~PerfCounterTrackTable() override;

  static const char* Name() { return "perf_counter_track"; }

  void ShrinkToFit() {
    perf_session_id_.ShrinkToFit();
    cpu_.ShrinkToFit();
    is_timebase_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_perf_session_id()->Append(std::move(row.perf_session_id));
    mutable_cpu()->Append(std::move(row.cpu));
    mutable_is_timebase()->Append(std::move(row.is_timebase));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<PerfCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<PerfCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<uint32_t>& perf_session_id() const {
    return static_cast<const ColumnType::perf_session_id&>(columns_[ColumnIndex::perf_session_id]);
  }
  const TypedColumn<uint32_t>& cpu() const {
    return static_cast<const ColumnType::cpu&>(columns_[ColumnIndex::cpu]);
  }
  const TypedColumn<uint32_t>& is_timebase() const {
    return static_cast<const ColumnType::is_timebase&>(columns_[ColumnIndex::is_timebase]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<PerfCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<uint32_t>* mutable_perf_session_id() {
    return static_cast<ColumnType::perf_session_id*>(
        &columns_[ColumnIndex::perf_session_id]);
  }
  TypedColumn<uint32_t>* mutable_cpu() {
    return static_cast<ColumnType::cpu*>(
        &columns_[ColumnIndex::cpu]);
  }
  TypedColumn<uint32_t>* mutable_is_timebase() {
    return static_cast<ColumnType::is_timebase*>(
        &columns_[ColumnIndex::is_timebase]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::perf_session_id::stored_type> perf_session_id_;
  ColumnStorage<ColumnType::cpu::stored_type> cpu_;
  ColumnStorage<ColumnType::is_timebase::stored_type> is_timebase_;
};
  

class ProcessCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t upid = 7;
  };
  struct ColumnType {
    using id = IdColumn<ProcessCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<ProcessCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using upid = TypedColumn<uint32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<ProcessCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        uint32_t in_upid = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          upid(std::move(in_upid)) {
      type_ = "process_counter_track";
    }
    uint32_t upid;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t upid = ColumnType::upid::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      ProcessCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    ProcessCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const ProcessCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::upid::type upid() const {
      return table_->upid()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const ProcessCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_upid(
        ColumnType::upid::non_optional_type v) {
      return mutable_table()->mutable_upid()->Set(row_number_, v);
    }

   private:
    ProcessCounterTrackTable* mutable_table() const {
      return const_cast<ProcessCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit ProcessCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), upid_(ColumnStorage<ColumnType::upid::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("upid", &upid_, ColumnFlag::upid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~ProcessCounterTrackTable() override;

  static const char* Name() { return "process_counter_track"; }

  void ShrinkToFit() {
    upid_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_upid()->Append(std::move(row.upid));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<ProcessCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<ProcessCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<uint32_t>& upid() const {
    return static_cast<const ColumnType::upid&>(columns_[ColumnIndex::upid]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<ProcessCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<uint32_t>* mutable_upid() {
    return static_cast<ColumnType::upid*>(
        &columns_[ColumnIndex::upid]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::upid::stored_type> upid_;
};
  

class ProcessTrackTable : public macros_internal::MacroTable {
 public:
  using Id = TrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t upid = 5;
  };
  struct ColumnType {
    using id = IdColumn<ProcessTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<ProcessTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using upid = TypedColumn<uint32_t>;
  };
  struct Row : public TrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<ProcessTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        uint32_t in_upid = {},
        std::nullptr_t = nullptr)
        : TrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id)),
          upid(std::move(in_upid)) {
      type_ = "process_track";
    }
    uint32_t upid;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t upid = ColumnType::upid::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      ProcessTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    ProcessTrackTable, RowNumber> {
   public:
    ConstRowReference(const ProcessTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::upid::type upid() const {
      return table_->upid()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const ProcessTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_upid(
        ColumnType::upid::non_optional_type v) {
      return mutable_table()->mutable_upid()->Set(row_number_, v);
    }

   private:
    ProcessTrackTable* mutable_table() const {
      return const_cast<ProcessTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit ProcessTrackTable(StringPool* pool, TrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), upid_(ColumnStorage<ColumnType::upid::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("upid", &upid_, ColumnFlag::upid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~ProcessTrackTable() override;

  static const char* Name() { return "process_track"; }

  void ShrinkToFit() {
    upid_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_upid()->Append(std::move(row.upid));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<ProcessTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<ProcessTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<uint32_t>& upid() const {
    return static_cast<const ColumnType::upid&>(columns_[ColumnIndex::upid]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<ProcessTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<uint32_t>* mutable_upid() {
    return static_cast<ColumnType::upid*>(
        &columns_[ColumnIndex::upid]);
  }

 private:
  TrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::upid::stored_type> upid_;
};
  

class SoftirqCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t softirq = 7;
  };
  struct ColumnType {
    using id = IdColumn<SoftirqCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<SoftirqCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using softirq = TypedColumn<int32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<SoftirqCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        int32_t in_softirq = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          softirq(std::move(in_softirq)) {
      type_ = "softirq_counter_track";
    }
    int32_t softirq;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t softirq = ColumnType::softirq::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      SoftirqCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    SoftirqCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const SoftirqCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::softirq::type softirq() const {
      return table_->softirq()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const SoftirqCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_softirq(
        ColumnType::softirq::non_optional_type v) {
      return mutable_table()->mutable_softirq()->Set(row_number_, v);
    }

   private:
    SoftirqCounterTrackTable* mutable_table() const {
      return const_cast<SoftirqCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit SoftirqCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), softirq_(ColumnStorage<ColumnType::softirq::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("softirq", &softirq_, ColumnFlag::softirq,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~SoftirqCounterTrackTable() override;

  static const char* Name() { return "softirq_counter_track"; }

  void ShrinkToFit() {
    softirq_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_softirq()->Append(std::move(row.softirq));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<SoftirqCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<SoftirqCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<int32_t>& softirq() const {
    return static_cast<const ColumnType::softirq&>(columns_[ColumnIndex::softirq]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<SoftirqCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<int32_t>* mutable_softirq() {
    return static_cast<ColumnType::softirq*>(
        &columns_[ColumnIndex::softirq]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::softirq::stored_type> softirq_;
};
  

class ThreadCounterTrackTable : public macros_internal::MacroTable {
 public:
  using Id = CounterTrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t unit = 5;
    static constexpr uint32_t description = 6;
    static constexpr uint32_t utid = 7;
  };
  struct ColumnType {
    using id = IdColumn<ThreadCounterTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<ThreadCounterTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using unit = TypedColumn<StringPool::Id>;
    using description = TypedColumn<StringPool::Id>;
    using utid = TypedColumn<uint32_t>;
  };
  struct Row : public CounterTrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<ThreadCounterTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        StringPool::Id in_unit = {},
        StringPool::Id in_description = {},
        uint32_t in_utid = {},
        std::nullptr_t = nullptr)
        : CounterTrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id), std::move(in_unit), std::move(in_description)),
          utid(std::move(in_utid)) {
      type_ = "thread_counter_track";
    }
    uint32_t utid;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t utid = ColumnType::utid::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      ThreadCounterTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    ThreadCounterTrackTable, RowNumber> {
   public:
    ConstRowReference(const ThreadCounterTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::unit::type unit() const {
      return table_->unit()[row_number_];
    }
    ColumnType::description::type description() const {
      return table_->description()[row_number_];
    }
    ColumnType::utid::type utid() const {
      return table_->utid()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const ThreadCounterTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_unit(
        ColumnType::unit::non_optional_type v) {
      return mutable_table()->mutable_unit()->Set(row_number_, v);
    }
    void set_description(
        ColumnType::description::non_optional_type v) {
      return mutable_table()->mutable_description()->Set(row_number_, v);
    }
    void set_utid(
        ColumnType::utid::non_optional_type v) {
      return mutable_table()->mutable_utid()->Set(row_number_, v);
    }

   private:
    ThreadCounterTrackTable* mutable_table() const {
      return const_cast<ThreadCounterTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit ThreadCounterTrackTable(StringPool* pool, CounterTrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), utid_(ColumnStorage<ColumnType::utid::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("utid", &utid_, ColumnFlag::utid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~ThreadCounterTrackTable() override;

  static const char* Name() { return "thread_counter_track"; }

  void ShrinkToFit() {
    utid_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_utid()->Append(std::move(row.utid));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<ThreadCounterTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<ThreadCounterTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<StringPool::Id>& unit() const {
    return static_cast<const ColumnType::unit&>(columns_[ColumnIndex::unit]);
  }
  const TypedColumn<StringPool::Id>& description() const {
    return static_cast<const ColumnType::description&>(columns_[ColumnIndex::description]);
  }
  const TypedColumn<uint32_t>& utid() const {
    return static_cast<const ColumnType::utid&>(columns_[ColumnIndex::utid]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<ThreadCounterTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<StringPool::Id>* mutable_unit() {
    return static_cast<ColumnType::unit*>(
        &columns_[ColumnIndex::unit]);
  }
  TypedColumn<StringPool::Id>* mutable_description() {
    return static_cast<ColumnType::description*>(
        &columns_[ColumnIndex::description]);
  }
  TypedColumn<uint32_t>* mutable_utid() {
    return static_cast<ColumnType::utid*>(
        &columns_[ColumnIndex::utid]);
  }

 private:
  CounterTrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::utid::stored_type> utid_;
};
  

class ThreadTrackTable : public macros_internal::MacroTable {
 public:
  using Id = TrackTable::Id;
    
  struct ColumnIndex {
    static constexpr uint32_t id = 0;
    static constexpr uint32_t type = 1;
    static constexpr uint32_t name = 2;
    static constexpr uint32_t parent_id = 3;
    static constexpr uint32_t source_arg_set_id = 4;
    static constexpr uint32_t utid = 5;
  };
  struct ColumnType {
    using id = IdColumn<ThreadTrackTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using name = TypedColumn<StringPool::Id>;
    using parent_id = TypedColumn<base::Optional<ThreadTrackTable::Id>>;
    using source_arg_set_id = TypedColumn<base::Optional<uint32_t>>;
    using utid = TypedColumn<uint32_t>;
  };
  struct Row : public TrackTable::Row {
    Row(StringPool::Id in_name = {},
        base::Optional<ThreadTrackTable::Id> in_parent_id = {},
        base::Optional<uint32_t> in_source_arg_set_id = {},
        uint32_t in_utid = {},
        std::nullptr_t = nullptr)
        : TrackTable::Row(std::move(in_name), std::move(in_parent_id), std::move(in_source_arg_set_id)),
          utid(std::move(in_utid)) {
      type_ = "thread_track";
    }
    uint32_t utid;
  };
  struct IdAndRow {
    uint32_t row;
    Id id;
  };
  struct ColumnFlag {
    static constexpr uint32_t utid = ColumnType::utid::default_flags();
  };

  class RowNumber;
  class ConstRowReference;
  class RowReference;

  class RowNumber : public macros_internal::AbstractRowNumber<
      ThreadTrackTable, ConstRowReference, RowReference> {
   public:
    explicit RowNumber(uint32_t row_number)
        : AbstractRowNumber(row_number) {}
  };
  static_assert(std::is_trivially_destructible<RowNumber>::value,
                "Inheritance used without trivial destruction");

  class ConstRowReference : public macros_internal::AbstractConstRowReference<
    ThreadTrackTable, RowNumber> {
   public:
    ConstRowReference(const ThreadTrackTable* table, uint32_t row_number)
        : AbstractConstRowReference(table, row_number) {}

    ColumnType::id::type id() const {
      return table_->id()[row_number_];
    }
    ColumnType::type::type type() const {
      return table_->type()[row_number_];
    }
    ColumnType::name::type name() const {
      return table_->name()[row_number_];
    }
    ColumnType::parent_id::type parent_id() const {
      return table_->parent_id()[row_number_];
    }
    ColumnType::source_arg_set_id::type source_arg_set_id() const {
      return table_->source_arg_set_id()[row_number_];
    }
    ColumnType::utid::type utid() const {
      return table_->utid()[row_number_];
    }
  };
  static_assert(std::is_trivially_destructible<ConstRowReference>::value,
                "Inheritance used without trivial destruction");
  class RowReference : public ConstRowReference {
   public:
    RowReference(const ThreadTrackTable* table, uint32_t row_number)
        : ConstRowReference(table, row_number) {}

    void set_name(
        ColumnType::name::non_optional_type v) {
      return mutable_table()->mutable_name()->Set(row_number_, v);
    }
    void set_parent_id(
        ColumnType::parent_id::non_optional_type v) {
      return mutable_table()->mutable_parent_id()->Set(row_number_, v);
    }
    void set_source_arg_set_id(
        ColumnType::source_arg_set_id::non_optional_type v) {
      return mutable_table()->mutable_source_arg_set_id()->Set(row_number_, v);
    }
    void set_utid(
        ColumnType::utid::non_optional_type v) {
      return mutable_table()->mutable_utid()->Set(row_number_, v);
    }

   private:
    ThreadTrackTable* mutable_table() const {
      return const_cast<ThreadTrackTable*>(table_);
    }
  };
  static_assert(std::is_trivially_destructible<RowReference>::value,
                "Inheritance used without trivial destruction");

  explicit ThreadTrackTable(StringPool* pool, TrackTable* parent)
      : macros_internal::MacroTable(pool, parent),
        parent_(parent), utid_(ColumnStorage<ColumnType::utid::stored_type>::Create<false>()) {
    uint32_t overlay_idx = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("utid", &utid_, ColumnFlag::utid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_idx);
  }
  ~ThreadTrackTable() override;

  static const char* Name() { return "thread_track"; }

  void ShrinkToFit() {
    utid_.ShrinkToFit();
  }

  base::Optional<ConstRowReference> FindById(Id find_id) const {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(ConstRowReference(this, *row))
               : base::nullopt;
  }

  base::Optional<RowReference> FindById(Id find_id) {
    base::Optional<uint32_t> row = id().IndexOf(find_id);
    return row ? base::make_optional(RowReference(this, *row)) : base::nullopt;
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    Id id = Id{parent_->Insert(row).id};
    UpdateOverlaysAfterParentInsert();
    mutable_utid()->Append(std::move(row.utid));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number, std::move(id)};
  }

  const IdColumn<ThreadTrackTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<StringPool::Id>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<ThreadTrackTable::Id>>& parent_id() const {
    return static_cast<const ColumnType::parent_id&>(columns_[ColumnIndex::parent_id]);
  }
  const TypedColumn<base::Optional<uint32_t>>& source_arg_set_id() const {
    return static_cast<const ColumnType::source_arg_set_id&>(columns_[ColumnIndex::source_arg_set_id]);
  }
  const TypedColumn<uint32_t>& utid() const {
    return static_cast<const ColumnType::utid&>(columns_[ColumnIndex::utid]);
  }

  TypedColumn<StringPool::Id>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<ThreadTrackTable::Id>>* mutable_parent_id() {
    return static_cast<ColumnType::parent_id*>(
        &columns_[ColumnIndex::parent_id]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_source_arg_set_id() {
    return static_cast<ColumnType::source_arg_set_id*>(
        &columns_[ColumnIndex::source_arg_set_id]);
  }
  TypedColumn<uint32_t>* mutable_utid() {
    return static_cast<ColumnType::utid*>(
        &columns_[ColumnIndex::utid]);
  }

 private:
  TrackTable* parent_ = nullptr;
  ColumnStorage<ColumnType::utid::stored_type> utid_;
};

}  // namespace tables
}  // namespace trace_processor
}  // namespace perfetto

#endif  // THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_TRACK_TABLES_PY_H_
