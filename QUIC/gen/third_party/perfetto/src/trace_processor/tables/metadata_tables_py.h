#ifndef THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_METADATA_TABLES_PY_H_
#define THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_METADATA_TABLES_PY_H_

#include "src/trace_processor/tables/macros.h"



namespace perfetto {
namespace trace_processor {
namespace tables {

class ProcessTable : public macros_internal::MacroTable {
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
    static constexpr uint32_t pid = 2;
    static constexpr uint32_t name = 3;
    static constexpr uint32_t start_ts = 4;
    static constexpr uint32_t end_ts = 5;
    static constexpr uint32_t parent_upid = 6;
    static constexpr uint32_t uid = 7;
    static constexpr uint32_t android_appid = 8;
    static constexpr uint32_t cmdline = 9;
    static constexpr uint32_t arg_set_id = 10;
  };
  struct ColumnType {
    using id = IdColumn<ProcessTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using pid = TypedColumn<uint32_t>;
    using name = TypedColumn<base::Optional<StringPool::Id>>;
    using start_ts = TypedColumn<base::Optional<int64_t>>;
    using end_ts = TypedColumn<base::Optional<int64_t>>;
    using parent_upid = TypedColumn<base::Optional<uint32_t>>;
    using uid = TypedColumn<base::Optional<uint32_t>>;
    using android_appid = TypedColumn<base::Optional<uint32_t>>;
    using cmdline = TypedColumn<base::Optional<StringPool::Id>>;
    using arg_set_id = TypedColumn<uint32_t>;
  };
  struct Row : public macros_internal::RootParentTable::Row {
    Row(uint32_t in_pid = {},
        base::Optional<StringPool::Id> in_name = {},
        base::Optional<int64_t> in_start_ts = {},
        base::Optional<int64_t> in_end_ts = {},
        base::Optional<uint32_t> in_parent_upid = {},
        base::Optional<uint32_t> in_uid = {},
        base::Optional<uint32_t> in_android_appid = {},
        base::Optional<StringPool::Id> in_cmdline = {},
        uint32_t in_arg_set_id = {})
        : macros_internal::RootParentTable::Row(nullptr),
          pid(std::move(in_pid)),
          name(std::move(in_name)),
          start_ts(std::move(in_start_ts)),
          end_ts(std::move(in_end_ts)),
          parent_upid(std::move(in_parent_upid)),
          uid(std::move(in_uid)),
          android_appid(std::move(in_android_appid)),
          cmdline(std::move(in_cmdline)),
          arg_set_id(std::move(in_arg_set_id)) {
      type_ = "internal_process";
    }
    uint32_t pid;
    base::Optional<StringPool::Id> name;
    base::Optional<int64_t> start_ts;
    base::Optional<int64_t> end_ts;
    base::Optional<uint32_t> parent_upid;
    base::Optional<uint32_t> uid;
    base::Optional<uint32_t> android_appid;
    base::Optional<StringPool::Id> cmdline;
    uint32_t arg_set_id;
  };
  struct IdAndRow {
    uint32_t row;
  };
  struct ColumnFlag {
    static constexpr uint32_t pid = ColumnType::pid::default_flags();
      static constexpr uint32_t name = ColumnType::name::default_flags();
      static constexpr uint32_t start_ts = ColumnType::start_ts::default_flags();
      static constexpr uint32_t end_ts = ColumnType::end_ts::default_flags();
      static constexpr uint32_t parent_upid = ColumnType::parent_upid::default_flags();
      static constexpr uint32_t uid = ColumnType::uid::default_flags();
      static constexpr uint32_t android_appid = ColumnType::android_appid::default_flags();
      static constexpr uint32_t cmdline = ColumnType::cmdline::default_flags();
      static constexpr uint32_t arg_set_id = ColumnType::arg_set_id::default_flags();
  };

  explicit ProcessTable(StringPool* pool)
      : macros_internal::MacroTable(pool, nullptr),
        pid_(ColumnStorage<ColumnType::pid::stored_type>::Create<false>()),
        name_(ColumnStorage<ColumnType::name::stored_type>::Create<false>()),
        start_ts_(ColumnStorage<ColumnType::start_ts::stored_type>::Create<false>()),
        end_ts_(ColumnStorage<ColumnType::end_ts::stored_type>::Create<false>()),
        parent_upid_(ColumnStorage<ColumnType::parent_upid::stored_type>::Create<false>()),
        uid_(ColumnStorage<ColumnType::uid::stored_type>::Create<false>()),
        android_appid_(ColumnStorage<ColumnType::android_appid::stored_type>::Create<false>()),
        cmdline_(ColumnStorage<ColumnType::cmdline::stored_type>::Create<false>()),
        arg_set_id_(ColumnStorage<ColumnType::arg_set_id::stored_type>::Create<false>()) {
    uint32_t overlay_count = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("pid", &pid_, ColumnFlag::pid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("name", &name_, ColumnFlag::name,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("start_ts", &start_ts_, ColumnFlag::start_ts,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("end_ts", &end_ts_, ColumnFlag::end_ts,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("parent_upid", &parent_upid_, ColumnFlag::parent_upid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("uid", &uid_, ColumnFlag::uid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("android_appid", &android_appid_, ColumnFlag::android_appid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("cmdline", &cmdline_, ColumnFlag::cmdline,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("arg_set_id", &arg_set_id_, ColumnFlag::arg_set_id,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
  }
  ~ProcessTable() override;

  static const char* Name() { return "internal_process"; }

  void ShrinkToFit() {
    type_.ShrinkToFit();
    pid_.ShrinkToFit();
    name_.ShrinkToFit();
    start_ts_.ShrinkToFit();
    end_ts_.ShrinkToFit();
    parent_upid_.ShrinkToFit();
    uid_.ShrinkToFit();
    android_appid_.ShrinkToFit();
    cmdline_.ShrinkToFit();
    arg_set_id_.ShrinkToFit();
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    type_.Append(string_pool_->InternString(row.type()));
    mutable_pid()->Append(std::move(row.pid));
    mutable_name()->Append(std::move(row.name));
    mutable_start_ts()->Append(std::move(row.start_ts));
    mutable_end_ts()->Append(std::move(row.end_ts));
    mutable_parent_upid()->Append(std::move(row.parent_upid));
    mutable_uid()->Append(std::move(row.uid));
    mutable_android_appid()->Append(std::move(row.android_appid));
    mutable_cmdline()->Append(std::move(row.cmdline));
    mutable_arg_set_id()->Append(std::move(row.arg_set_id));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number};
  }

  const IdColumn<ProcessTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<uint32_t>& pid() const {
    return static_cast<const ColumnType::pid&>(columns_[ColumnIndex::pid]);
  }
  const TypedColumn<base::Optional<StringPool::Id>>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<int64_t>>& start_ts() const {
    return static_cast<const ColumnType::start_ts&>(columns_[ColumnIndex::start_ts]);
  }
  const TypedColumn<base::Optional<int64_t>>& end_ts() const {
    return static_cast<const ColumnType::end_ts&>(columns_[ColumnIndex::end_ts]);
  }
  const TypedColumn<base::Optional<uint32_t>>& parent_upid() const {
    return static_cast<const ColumnType::parent_upid&>(columns_[ColumnIndex::parent_upid]);
  }
  const TypedColumn<base::Optional<uint32_t>>& uid() const {
    return static_cast<const ColumnType::uid&>(columns_[ColumnIndex::uid]);
  }
  const TypedColumn<base::Optional<uint32_t>>& android_appid() const {
    return static_cast<const ColumnType::android_appid&>(columns_[ColumnIndex::android_appid]);
  }
  const TypedColumn<base::Optional<StringPool::Id>>& cmdline() const {
    return static_cast<const ColumnType::cmdline&>(columns_[ColumnIndex::cmdline]);
  }
  const TypedColumn<uint32_t>& arg_set_id() const {
    return static_cast<const ColumnType::arg_set_id&>(columns_[ColumnIndex::arg_set_id]);
  }

  TypedColumn<uint32_t>* mutable_pid() {
    return static_cast<ColumnType::pid*>(
        &columns_[ColumnIndex::pid]);
  }
  TypedColumn<base::Optional<StringPool::Id>>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<int64_t>>* mutable_start_ts() {
    return static_cast<ColumnType::start_ts*>(
        &columns_[ColumnIndex::start_ts]);
  }
  TypedColumn<base::Optional<int64_t>>* mutable_end_ts() {
    return static_cast<ColumnType::end_ts*>(
        &columns_[ColumnIndex::end_ts]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_parent_upid() {
    return static_cast<ColumnType::parent_upid*>(
        &columns_[ColumnIndex::parent_upid]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_uid() {
    return static_cast<ColumnType::uid*>(
        &columns_[ColumnIndex::uid]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_android_appid() {
    return static_cast<ColumnType::android_appid*>(
        &columns_[ColumnIndex::android_appid]);
  }
  TypedColumn<base::Optional<StringPool::Id>>* mutable_cmdline() {
    return static_cast<ColumnType::cmdline*>(
        &columns_[ColumnIndex::cmdline]);
  }
  TypedColumn<uint32_t>* mutable_arg_set_id() {
    return static_cast<ColumnType::arg_set_id*>(
        &columns_[ColumnIndex::arg_set_id]);
  }

 private:
  ColumnStorage<ColumnType::pid::stored_type> pid_;
  ColumnStorage<ColumnType::name::stored_type> name_;
  ColumnStorage<ColumnType::start_ts::stored_type> start_ts_;
  ColumnStorage<ColumnType::end_ts::stored_type> end_ts_;
  ColumnStorage<ColumnType::parent_upid::stored_type> parent_upid_;
  ColumnStorage<ColumnType::uid::stored_type> uid_;
  ColumnStorage<ColumnType::android_appid::stored_type> android_appid_;
  ColumnStorage<ColumnType::cmdline::stored_type> cmdline_;
  ColumnStorage<ColumnType::arg_set_id::stored_type> arg_set_id_;
};
  

class ThreadTable : public macros_internal::MacroTable {
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
    static constexpr uint32_t tid = 2;
    static constexpr uint32_t name = 3;
    static constexpr uint32_t start_ts = 4;
    static constexpr uint32_t end_ts = 5;
    static constexpr uint32_t upid = 6;
    static constexpr uint32_t is_main_thread = 7;
  };
  struct ColumnType {
    using id = IdColumn<ThreadTable::Id>;
    using type = TypedColumn<StringPool::Id>;
    using tid = TypedColumn<uint32_t>;
    using name = TypedColumn<base::Optional<StringPool::Id>>;
    using start_ts = TypedColumn<base::Optional<int64_t>>;
    using end_ts = TypedColumn<base::Optional<int64_t>>;
    using upid = TypedColumn<base::Optional<uint32_t>>;
    using is_main_thread = TypedColumn<base::Optional<uint32_t>>;
  };
  struct Row : public macros_internal::RootParentTable::Row {
    Row(uint32_t in_tid = {},
        base::Optional<StringPool::Id> in_name = {},
        base::Optional<int64_t> in_start_ts = {},
        base::Optional<int64_t> in_end_ts = {},
        base::Optional<uint32_t> in_upid = {},
        base::Optional<uint32_t> in_is_main_thread = {})
        : macros_internal::RootParentTable::Row(nullptr),
          tid(std::move(in_tid)),
          name(std::move(in_name)),
          start_ts(std::move(in_start_ts)),
          end_ts(std::move(in_end_ts)),
          upid(std::move(in_upid)),
          is_main_thread(std::move(in_is_main_thread)) {
      type_ = "internal_thread";
    }
    uint32_t tid;
    base::Optional<StringPool::Id> name;
    base::Optional<int64_t> start_ts;
    base::Optional<int64_t> end_ts;
    base::Optional<uint32_t> upid;
    base::Optional<uint32_t> is_main_thread;
  };
  struct IdAndRow {
    uint32_t row;
  };
  struct ColumnFlag {
    static constexpr uint32_t tid = ColumnType::tid::default_flags();
      static constexpr uint32_t name = ColumnType::name::default_flags();
      static constexpr uint32_t start_ts = ColumnType::start_ts::default_flags();
      static constexpr uint32_t end_ts = ColumnType::end_ts::default_flags();
      static constexpr uint32_t upid = ColumnType::upid::default_flags();
      static constexpr uint32_t is_main_thread = ColumnType::is_main_thread::default_flags();
  };

  explicit ThreadTable(StringPool* pool)
      : macros_internal::MacroTable(pool, nullptr),
        tid_(ColumnStorage<ColumnType::tid::stored_type>::Create<false>()),
        name_(ColumnStorage<ColumnType::name::stored_type>::Create<false>()),
        start_ts_(ColumnStorage<ColumnType::start_ts::stored_type>::Create<false>()),
        end_ts_(ColumnStorage<ColumnType::end_ts::stored_type>::Create<false>()),
        upid_(ColumnStorage<ColumnType::upid::stored_type>::Create<false>()),
        is_main_thread_(ColumnStorage<ColumnType::is_main_thread::stored_type>::Create<false>()) {
    uint32_t overlay_count = static_cast<uint32_t>(overlays_.size()) - 1;
    columns_.emplace_back("tid", &tid_, ColumnFlag::tid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("name", &name_, ColumnFlag::name,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("start_ts", &start_ts_, ColumnFlag::start_ts,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("end_ts", &end_ts_, ColumnFlag::end_ts,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("upid", &upid_, ColumnFlag::upid,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
    columns_.emplace_back("is_main_thread", &is_main_thread_, ColumnFlag::is_main_thread,
                          this, static_cast<uint32_t>(columns_.size()),
                          overlay_count);
  }
  ~ThreadTable() override;

  static const char* Name() { return "internal_thread"; }

  void ShrinkToFit() {
    type_.ShrinkToFit();
    tid_.ShrinkToFit();
    name_.ShrinkToFit();
    start_ts_.ShrinkToFit();
    end_ts_.ShrinkToFit();
    upid_.ShrinkToFit();
    is_main_thread_.ShrinkToFit();
  }

  IdAndRow Insert(const Row& row) {
    uint32_t row_number = row_count();
    type_.Append(string_pool_->InternString(row.type()));
    mutable_tid()->Append(std::move(row.tid));
    mutable_name()->Append(std::move(row.name));
    mutable_start_ts()->Append(std::move(row.start_ts));
    mutable_end_ts()->Append(std::move(row.end_ts));
    mutable_upid()->Append(std::move(row.upid));
    mutable_is_main_thread()->Append(std::move(row.is_main_thread));
    UpdateSelfOverlayAfterInsert();
    return IdAndRow{row_number};
  }

  const IdColumn<ThreadTable::Id>& id() const {
    return static_cast<const ColumnType::id&>(columns_[ColumnIndex::id]);
  }
  const TypedColumn<StringPool::Id>& type() const {
    return static_cast<const ColumnType::type&>(columns_[ColumnIndex::type]);
  }
  const TypedColumn<uint32_t>& tid() const {
    return static_cast<const ColumnType::tid&>(columns_[ColumnIndex::tid]);
  }
  const TypedColumn<base::Optional<StringPool::Id>>& name() const {
    return static_cast<const ColumnType::name&>(columns_[ColumnIndex::name]);
  }
  const TypedColumn<base::Optional<int64_t>>& start_ts() const {
    return static_cast<const ColumnType::start_ts&>(columns_[ColumnIndex::start_ts]);
  }
  const TypedColumn<base::Optional<int64_t>>& end_ts() const {
    return static_cast<const ColumnType::end_ts&>(columns_[ColumnIndex::end_ts]);
  }
  const TypedColumn<base::Optional<uint32_t>>& upid() const {
    return static_cast<const ColumnType::upid&>(columns_[ColumnIndex::upid]);
  }
  const TypedColumn<base::Optional<uint32_t>>& is_main_thread() const {
    return static_cast<const ColumnType::is_main_thread&>(columns_[ColumnIndex::is_main_thread]);
  }

  TypedColumn<uint32_t>* mutable_tid() {
    return static_cast<ColumnType::tid*>(
        &columns_[ColumnIndex::tid]);
  }
  TypedColumn<base::Optional<StringPool::Id>>* mutable_name() {
    return static_cast<ColumnType::name*>(
        &columns_[ColumnIndex::name]);
  }
  TypedColumn<base::Optional<int64_t>>* mutable_start_ts() {
    return static_cast<ColumnType::start_ts*>(
        &columns_[ColumnIndex::start_ts]);
  }
  TypedColumn<base::Optional<int64_t>>* mutable_end_ts() {
    return static_cast<ColumnType::end_ts*>(
        &columns_[ColumnIndex::end_ts]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_upid() {
    return static_cast<ColumnType::upid*>(
        &columns_[ColumnIndex::upid]);
  }
  TypedColumn<base::Optional<uint32_t>>* mutable_is_main_thread() {
    return static_cast<ColumnType::is_main_thread*>(
        &columns_[ColumnIndex::is_main_thread]);
  }

 private:
  ColumnStorage<ColumnType::tid::stored_type> tid_;
  ColumnStorage<ColumnType::name::stored_type> name_;
  ColumnStorage<ColumnType::start_ts::stored_type> start_ts_;
  ColumnStorage<ColumnType::end_ts::stored_type> end_ts_;
  ColumnStorage<ColumnType::upid::stored_type> upid_;
  ColumnStorage<ColumnType::is_main_thread::stored_type> is_main_thread_;
};

}  // namespace tables
}  // namespace trace_processor
}  // namespace perfetto

#endif  // THIRD_PARTY_PERFETTO_SRC_TRACE_PROCESSOR_TABLES_METADATA_TABLES_PY_H_