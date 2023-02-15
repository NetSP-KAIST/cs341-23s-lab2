#ifndef THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_ANDROID_TABLES_PY_H_
#define THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_ANDROID_TABLES_PY_H_

#include "src/trace_processor/tables/macros.h"



namespace perfetto {
namespace trace_processor {
namespace tables {

class AndroidLogTable : public macros_internal::MacroTable {
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
    static constexpr uint32_t ts = 2;
    static constexpr uint32_t utid = 3;
    static constexpr uint32_t prio = 4;
    static constexpr uint32_t tag = 5;
    static constexpr uint32_t msg = 6;
  };
  struct ColumnType {
    using id = IdColumn<AndroidLogTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using ts = TypedColumn<int64_t>;
    using utid = TypedColumn<uint32_t>;
    using prio = TypedColumn<uint32_t>;
    using tag = TypedColumn<base::Optional<StringPool::Id>>;
    using msg = TypedColumn<StringPool::Id>;
  };
  struct Row : public macros_internal::RootParentTable::Row {
    Row(int64_t in_ts = {},
        uint32_t in_utid = {},
        uint32_t in_prio = {},
        base::Optional<StringPool::Id> in_tag = {},
        StringPool::Id in_msg = {})
        : macros_internal::RootParentTable::Row(nullptr),
          ts(std::move(in_ts)),
          utid(std::move(in_utid)),
          prio(std::move(in_prio)),
          tag(std::move(in_tag)),
          msg(std::move(in_msg)) {
      type_ = "android_logs";
    }
    int64_t ts;
    uint32_t utid;
    uint32_t prio;
    base::Optional<StringPool::Id> tag;
    StringPool::Id msg;
  };
  struct IdAndRow {
    uint32_t row;
  };
  struct ColumnFlag {
    static constexpr uint32_t ts = ColumnType::ts::default_flags();
      static constexpr uint32_t utid = ColumnType::utid::default_flags();
      static constexpr uint32_t prio = ColumnType::prio::default_flags();
      static constexpr uint32_t tag = ColumnType::tag::default_flags();
      static constexpr uint32_t msg = ColumnType::msg::default_flags();
  };

  explicit AndroidLogTable(StringPool* pool)
      : macros_internal::MacroTable(pool, nullptr),
        ts_(ColumnStorage<ColumnType::ts::stored_type>::Create<false>()),
        utid_(ColumnStorage<ColumnType::utid::stored_type>::Create<false>()),
        prio_(ColumnStorage<ColumnType::prio::stored_type>::Create<false>()),
        tag_(ColumnStorage<ColumnType::tag::stored_type>::Create<false>()),
        msg_(ColumnStorage<ColumnType::msg::stored_type>::Create<false>()) {
    uint32_t overlay_count = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("ts", &ts_, ColumnFlag::ts,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("utid", &utid_, ColumnFlag::utid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("prio", &prio_, ColumnFlag::prio,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("tag", &tag_, ColumnFlag::tag,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("msg", &msg_, ColumnFlag::msg,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
  }
  ~AndroidLogTable() override;

  static const char* Name() { return "android_logs"; }

  void ShrinkToFit() {
    type_.ShrinkToFit();
    ts_.ShrinkToFit();
    utid_.ShrinkToFit();
    prio_.ShrinkToFit();
    tag_.ShrinkToFit();
    msg_.ShrinkToFit();
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    type_.Append(string_pool_->InternString(row.type()));
    mutable_ts()->Append(std::move(row.ts));
    mutable_utid()->Append(std::move(row.utid));
    mutable_prio()->Append(std::move(row.prio));
    mutable_tag()->Append(std::move(row.tag));
    mutable_msg()->Append(std::move(row.msg));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number};
  }

  const IdColumn<AndroidLogTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<int64_t>& ts() const {
    return static_cast<const ColumnType::ts&>(columns_[ColumnIndex::ts]);
  }
  const TypedColumn<uint32_t>& utid() const {
    return static_cast<const ColumnType::utid&>(columns_[ColumnIndex::utid]);
  }
  const TypedColumn<uint32_t>& prio() const {
    return static_cast<const ColumnType::prio&>(columns_[ColumnIndex::prio]);
  }
  const TypedColumn<base::Optional<StringPool::Id>>& tag() const {
    return static_cast<const ColumnType::tag&>(columns_[ColumnIndex::tag]);
  }
  const TypedColumn<StringPool::Id>& msg() const {
    return static_cast<const ColumnType::msg&>(columns_[ColumnIndex::msg]);
  }

  TypedColumn<int64_t>* mutable_ts() {
    return static_cast<ColumnType::ts*>(
        &columns_[ColumnIndex::ts]);
  }
  TypedColumn<uint32_t>* mutable_utid() {
    return static_cast<ColumnType::utid*>(
        &columns_[ColumnIndex::utid]);
  }
  TypedColumn<uint32_t>* mutable_prio() {
    return static_cast<ColumnType::prio*>(
        &columns_[ColumnIndex::prio]);
  }
  TypedColumn<base::Optional<StringPool::Id>>* mutable_tag() {
    return static_cast<ColumnType::tag*>(
        &columns_[ColumnIndex::tag]);
  }
  TypedColumn<StringPool::Id>* mutable_msg() {
    return static_cast<ColumnType::msg*>(
        &columns_[ColumnIndex::msg]);
  }

 private:
  ColumnStorage<ColumnType::ts::stored_type> ts_;
  ColumnStorage<ColumnType::utid::stored_type> utid_;
  ColumnStorage<ColumnType::prio::stored_type> prio_;
  ColumnStorage<ColumnType::tag::stored_type> tag_;
  ColumnStorage<ColumnType::msg::stored_type> msg_;
};

}  // namespace tables
}  // namespace trace_processor
}  // namespace perfetto

#endif  // THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_ANDROID_TABLES_PY_H_
