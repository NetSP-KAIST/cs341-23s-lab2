// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_COMPACTION_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_COMPACTION_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class MmCompactionWakeupKcompactdFtraceEvent;
class MmCompactionTryToCompactPagesFtraceEvent;
class MmCompactionSuitableFtraceEvent;
class MmCompactionMigratepagesFtraceEvent;
class MmCompactionKcompactdWakeFtraceEvent;
class MmCompactionKcompactdSleepFtraceEvent;
class MmCompactionIsolateMigratepagesFtraceEvent;
class MmCompactionIsolateFreepagesFtraceEvent;
class MmCompactionFinishedFtraceEvent;
class MmCompactionEndFtraceEvent;
class MmCompactionDeferResetFtraceEvent;
class MmCompactionDeferredFtraceEvent;
class MmCompactionDeferCompactionFtraceEvent;
class MmCompactionBeginFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT MmCompactionWakeupKcompactdFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kOrderFieldNumber = 2,
    kClasszoneIdxFieldNumber = 3,
    kHighestZoneidxFieldNumber = 4,
  };

  MmCompactionWakeupKcompactdFtraceEvent();
  ~MmCompactionWakeupKcompactdFtraceEvent() override;
  MmCompactionWakeupKcompactdFtraceEvent(MmCompactionWakeupKcompactdFtraceEvent&&) noexcept;
  MmCompactionWakeupKcompactdFtraceEvent& operator=(MmCompactionWakeupKcompactdFtraceEvent&&);
  MmCompactionWakeupKcompactdFtraceEvent(const MmCompactionWakeupKcompactdFtraceEvent&);
  MmCompactionWakeupKcompactdFtraceEvent& operator=(const MmCompactionWakeupKcompactdFtraceEvent&);
  bool operator==(const MmCompactionWakeupKcompactdFtraceEvent&) const;
  bool operator!=(const MmCompactionWakeupKcompactdFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_order() const { return _has_field_[2]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(2); }

  bool has_classzone_idx() const { return _has_field_[3]; }
  uint32_t classzone_idx() const { return classzone_idx_; }
  void set_classzone_idx(uint32_t value) { classzone_idx_ = value; _has_field_.set(3); }

  bool has_highest_zoneidx() const { return _has_field_[4]; }
  uint32_t highest_zoneidx() const { return highest_zoneidx_; }
  void set_highest_zoneidx(uint32_t value) { highest_zoneidx_ = value; _has_field_.set(4); }

 private:
  int32_t nid_{};
  int32_t order_{};
  uint32_t classzone_idx_{};
  uint32_t highest_zoneidx_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionTryToCompactPagesFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kOrderFieldNumber = 1,
    kGfpMaskFieldNumber = 2,
    kModeFieldNumber = 3,
    kPrioFieldNumber = 4,
  };

  MmCompactionTryToCompactPagesFtraceEvent();
  ~MmCompactionTryToCompactPagesFtraceEvent() override;
  MmCompactionTryToCompactPagesFtraceEvent(MmCompactionTryToCompactPagesFtraceEvent&&) noexcept;
  MmCompactionTryToCompactPagesFtraceEvent& operator=(MmCompactionTryToCompactPagesFtraceEvent&&);
  MmCompactionTryToCompactPagesFtraceEvent(const MmCompactionTryToCompactPagesFtraceEvent&);
  MmCompactionTryToCompactPagesFtraceEvent& operator=(const MmCompactionTryToCompactPagesFtraceEvent&);
  bool operator==(const MmCompactionTryToCompactPagesFtraceEvent&) const;
  bool operator!=(const MmCompactionTryToCompactPagesFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_order() const { return _has_field_[1]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(1); }

  bool has_gfp_mask() const { return _has_field_[2]; }
  uint32_t gfp_mask() const { return gfp_mask_; }
  void set_gfp_mask(uint32_t value) { gfp_mask_ = value; _has_field_.set(2); }

  bool has_mode() const { return _has_field_[3]; }
  uint32_t mode() const { return mode_; }
  void set_mode(uint32_t value) { mode_ = value; _has_field_.set(3); }

  bool has_prio() const { return _has_field_[4]; }
  int32_t prio() const { return prio_; }
  void set_prio(int32_t value) { prio_ = value; _has_field_.set(4); }

 private:
  int32_t order_{};
  uint32_t gfp_mask_{};
  uint32_t mode_{};
  int32_t prio_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionSuitableFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kIdxFieldNumber = 2,
    kOrderFieldNumber = 3,
    kRetFieldNumber = 4,
  };

  MmCompactionSuitableFtraceEvent();
  ~MmCompactionSuitableFtraceEvent() override;
  MmCompactionSuitableFtraceEvent(MmCompactionSuitableFtraceEvent&&) noexcept;
  MmCompactionSuitableFtraceEvent& operator=(MmCompactionSuitableFtraceEvent&&);
  MmCompactionSuitableFtraceEvent(const MmCompactionSuitableFtraceEvent&);
  MmCompactionSuitableFtraceEvent& operator=(const MmCompactionSuitableFtraceEvent&);
  bool operator==(const MmCompactionSuitableFtraceEvent&) const;
  bool operator!=(const MmCompactionSuitableFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  uint32_t idx() const { return idx_; }
  void set_idx(uint32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_order() const { return _has_field_[3]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(3); }

  bool has_ret() const { return _has_field_[4]; }
  int32_t ret() const { return ret_; }
  void set_ret(int32_t value) { ret_ = value; _has_field_.set(4); }

 private:
  int32_t nid_{};
  uint32_t idx_{};
  int32_t order_{};
  int32_t ret_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionMigratepagesFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNrMigratedFieldNumber = 1,
    kNrFailedFieldNumber = 2,
  };

  MmCompactionMigratepagesFtraceEvent();
  ~MmCompactionMigratepagesFtraceEvent() override;
  MmCompactionMigratepagesFtraceEvent(MmCompactionMigratepagesFtraceEvent&&) noexcept;
  MmCompactionMigratepagesFtraceEvent& operator=(MmCompactionMigratepagesFtraceEvent&&);
  MmCompactionMigratepagesFtraceEvent(const MmCompactionMigratepagesFtraceEvent&);
  MmCompactionMigratepagesFtraceEvent& operator=(const MmCompactionMigratepagesFtraceEvent&);
  bool operator==(const MmCompactionMigratepagesFtraceEvent&) const;
  bool operator!=(const MmCompactionMigratepagesFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nr_migrated() const { return _has_field_[1]; }
  uint64_t nr_migrated() const { return nr_migrated_; }
  void set_nr_migrated(uint64_t value) { nr_migrated_ = value; _has_field_.set(1); }

  bool has_nr_failed() const { return _has_field_[2]; }
  uint64_t nr_failed() const { return nr_failed_; }
  void set_nr_failed(uint64_t value) { nr_failed_ = value; _has_field_.set(2); }

 private:
  uint64_t nr_migrated_{};
  uint64_t nr_failed_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionKcompactdWakeFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kOrderFieldNumber = 2,
    kClasszoneIdxFieldNumber = 3,
    kHighestZoneidxFieldNumber = 4,
  };

  MmCompactionKcompactdWakeFtraceEvent();
  ~MmCompactionKcompactdWakeFtraceEvent() override;
  MmCompactionKcompactdWakeFtraceEvent(MmCompactionKcompactdWakeFtraceEvent&&) noexcept;
  MmCompactionKcompactdWakeFtraceEvent& operator=(MmCompactionKcompactdWakeFtraceEvent&&);
  MmCompactionKcompactdWakeFtraceEvent(const MmCompactionKcompactdWakeFtraceEvent&);
  MmCompactionKcompactdWakeFtraceEvent& operator=(const MmCompactionKcompactdWakeFtraceEvent&);
  bool operator==(const MmCompactionKcompactdWakeFtraceEvent&) const;
  bool operator!=(const MmCompactionKcompactdWakeFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_order() const { return _has_field_[2]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(2); }

  bool has_classzone_idx() const { return _has_field_[3]; }
  uint32_t classzone_idx() const { return classzone_idx_; }
  void set_classzone_idx(uint32_t value) { classzone_idx_ = value; _has_field_.set(3); }

  bool has_highest_zoneidx() const { return _has_field_[4]; }
  uint32_t highest_zoneidx() const { return highest_zoneidx_; }
  void set_highest_zoneidx(uint32_t value) { highest_zoneidx_ = value; _has_field_.set(4); }

 private:
  int32_t nid_{};
  int32_t order_{};
  uint32_t classzone_idx_{};
  uint32_t highest_zoneidx_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionKcompactdSleepFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
  };

  MmCompactionKcompactdSleepFtraceEvent();
  ~MmCompactionKcompactdSleepFtraceEvent() override;
  MmCompactionKcompactdSleepFtraceEvent(MmCompactionKcompactdSleepFtraceEvent&&) noexcept;
  MmCompactionKcompactdSleepFtraceEvent& operator=(MmCompactionKcompactdSleepFtraceEvent&&);
  MmCompactionKcompactdSleepFtraceEvent(const MmCompactionKcompactdSleepFtraceEvent&);
  MmCompactionKcompactdSleepFtraceEvent& operator=(const MmCompactionKcompactdSleepFtraceEvent&);
  bool operator==(const MmCompactionKcompactdSleepFtraceEvent&) const;
  bool operator!=(const MmCompactionKcompactdSleepFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

 private:
  int32_t nid_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionIsolateMigratepagesFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kStartPfnFieldNumber = 1,
    kEndPfnFieldNumber = 2,
    kNrScannedFieldNumber = 3,
    kNrTakenFieldNumber = 4,
  };

  MmCompactionIsolateMigratepagesFtraceEvent();
  ~MmCompactionIsolateMigratepagesFtraceEvent() override;
  MmCompactionIsolateMigratepagesFtraceEvent(MmCompactionIsolateMigratepagesFtraceEvent&&) noexcept;
  MmCompactionIsolateMigratepagesFtraceEvent& operator=(MmCompactionIsolateMigratepagesFtraceEvent&&);
  MmCompactionIsolateMigratepagesFtraceEvent(const MmCompactionIsolateMigratepagesFtraceEvent&);
  MmCompactionIsolateMigratepagesFtraceEvent& operator=(const MmCompactionIsolateMigratepagesFtraceEvent&);
  bool operator==(const MmCompactionIsolateMigratepagesFtraceEvent&) const;
  bool operator!=(const MmCompactionIsolateMigratepagesFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_start_pfn() const { return _has_field_[1]; }
  uint64_t start_pfn() const { return start_pfn_; }
  void set_start_pfn(uint64_t value) { start_pfn_ = value; _has_field_.set(1); }

  bool has_end_pfn() const { return _has_field_[2]; }
  uint64_t end_pfn() const { return end_pfn_; }
  void set_end_pfn(uint64_t value) { end_pfn_ = value; _has_field_.set(2); }

  bool has_nr_scanned() const { return _has_field_[3]; }
  uint64_t nr_scanned() const { return nr_scanned_; }
  void set_nr_scanned(uint64_t value) { nr_scanned_ = value; _has_field_.set(3); }

  bool has_nr_taken() const { return _has_field_[4]; }
  uint64_t nr_taken() const { return nr_taken_; }
  void set_nr_taken(uint64_t value) { nr_taken_ = value; _has_field_.set(4); }

 private:
  uint64_t start_pfn_{};
  uint64_t end_pfn_{};
  uint64_t nr_scanned_{};
  uint64_t nr_taken_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionIsolateFreepagesFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kStartPfnFieldNumber = 1,
    kEndPfnFieldNumber = 2,
    kNrScannedFieldNumber = 3,
    kNrTakenFieldNumber = 4,
  };

  MmCompactionIsolateFreepagesFtraceEvent();
  ~MmCompactionIsolateFreepagesFtraceEvent() override;
  MmCompactionIsolateFreepagesFtraceEvent(MmCompactionIsolateFreepagesFtraceEvent&&) noexcept;
  MmCompactionIsolateFreepagesFtraceEvent& operator=(MmCompactionIsolateFreepagesFtraceEvent&&);
  MmCompactionIsolateFreepagesFtraceEvent(const MmCompactionIsolateFreepagesFtraceEvent&);
  MmCompactionIsolateFreepagesFtraceEvent& operator=(const MmCompactionIsolateFreepagesFtraceEvent&);
  bool operator==(const MmCompactionIsolateFreepagesFtraceEvent&) const;
  bool operator!=(const MmCompactionIsolateFreepagesFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_start_pfn() const { return _has_field_[1]; }
  uint64_t start_pfn() const { return start_pfn_; }
  void set_start_pfn(uint64_t value) { start_pfn_ = value; _has_field_.set(1); }

  bool has_end_pfn() const { return _has_field_[2]; }
  uint64_t end_pfn() const { return end_pfn_; }
  void set_end_pfn(uint64_t value) { end_pfn_ = value; _has_field_.set(2); }

  bool has_nr_scanned() const { return _has_field_[3]; }
  uint64_t nr_scanned() const { return nr_scanned_; }
  void set_nr_scanned(uint64_t value) { nr_scanned_ = value; _has_field_.set(3); }

  bool has_nr_taken() const { return _has_field_[4]; }
  uint64_t nr_taken() const { return nr_taken_; }
  void set_nr_taken(uint64_t value) { nr_taken_ = value; _has_field_.set(4); }

 private:
  uint64_t start_pfn_{};
  uint64_t end_pfn_{};
  uint64_t nr_scanned_{};
  uint64_t nr_taken_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionFinishedFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kIdxFieldNumber = 2,
    kOrderFieldNumber = 3,
    kRetFieldNumber = 4,
  };

  MmCompactionFinishedFtraceEvent();
  ~MmCompactionFinishedFtraceEvent() override;
  MmCompactionFinishedFtraceEvent(MmCompactionFinishedFtraceEvent&&) noexcept;
  MmCompactionFinishedFtraceEvent& operator=(MmCompactionFinishedFtraceEvent&&);
  MmCompactionFinishedFtraceEvent(const MmCompactionFinishedFtraceEvent&);
  MmCompactionFinishedFtraceEvent& operator=(const MmCompactionFinishedFtraceEvent&);
  bool operator==(const MmCompactionFinishedFtraceEvent&) const;
  bool operator!=(const MmCompactionFinishedFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  uint32_t idx() const { return idx_; }
  void set_idx(uint32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_order() const { return _has_field_[3]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(3); }

  bool has_ret() const { return _has_field_[4]; }
  int32_t ret() const { return ret_; }
  void set_ret(int32_t value) { ret_ = value; _has_field_.set(4); }

 private:
  int32_t nid_{};
  uint32_t idx_{};
  int32_t order_{};
  int32_t ret_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionEndFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kZoneStartFieldNumber = 1,
    kMigratePfnFieldNumber = 2,
    kFreePfnFieldNumber = 3,
    kZoneEndFieldNumber = 4,
    kSyncFieldNumber = 5,
    kStatusFieldNumber = 6,
  };

  MmCompactionEndFtraceEvent();
  ~MmCompactionEndFtraceEvent() override;
  MmCompactionEndFtraceEvent(MmCompactionEndFtraceEvent&&) noexcept;
  MmCompactionEndFtraceEvent& operator=(MmCompactionEndFtraceEvent&&);
  MmCompactionEndFtraceEvent(const MmCompactionEndFtraceEvent&);
  MmCompactionEndFtraceEvent& operator=(const MmCompactionEndFtraceEvent&);
  bool operator==(const MmCompactionEndFtraceEvent&) const;
  bool operator!=(const MmCompactionEndFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_zone_start() const { return _has_field_[1]; }
  uint64_t zone_start() const { return zone_start_; }
  void set_zone_start(uint64_t value) { zone_start_ = value; _has_field_.set(1); }

  bool has_migrate_pfn() const { return _has_field_[2]; }
  uint64_t migrate_pfn() const { return migrate_pfn_; }
  void set_migrate_pfn(uint64_t value) { migrate_pfn_ = value; _has_field_.set(2); }

  bool has_free_pfn() const { return _has_field_[3]; }
  uint64_t free_pfn() const { return free_pfn_; }
  void set_free_pfn(uint64_t value) { free_pfn_ = value; _has_field_.set(3); }

  bool has_zone_end() const { return _has_field_[4]; }
  uint64_t zone_end() const { return zone_end_; }
  void set_zone_end(uint64_t value) { zone_end_ = value; _has_field_.set(4); }

  bool has_sync() const { return _has_field_[5]; }
  uint32_t sync() const { return sync_; }
  void set_sync(uint32_t value) { sync_ = value; _has_field_.set(5); }

  bool has_status() const { return _has_field_[6]; }
  int32_t status() const { return status_; }
  void set_status(int32_t value) { status_ = value; _has_field_.set(6); }

 private:
  uint64_t zone_start_{};
  uint64_t migrate_pfn_{};
  uint64_t free_pfn_{};
  uint64_t zone_end_{};
  uint32_t sync_{};
  int32_t status_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionDeferResetFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kIdxFieldNumber = 2,
    kOrderFieldNumber = 3,
    kConsideredFieldNumber = 4,
    kDeferShiftFieldNumber = 5,
    kOrderFailedFieldNumber = 6,
  };

  MmCompactionDeferResetFtraceEvent();
  ~MmCompactionDeferResetFtraceEvent() override;
  MmCompactionDeferResetFtraceEvent(MmCompactionDeferResetFtraceEvent&&) noexcept;
  MmCompactionDeferResetFtraceEvent& operator=(MmCompactionDeferResetFtraceEvent&&);
  MmCompactionDeferResetFtraceEvent(const MmCompactionDeferResetFtraceEvent&);
  MmCompactionDeferResetFtraceEvent& operator=(const MmCompactionDeferResetFtraceEvent&);
  bool operator==(const MmCompactionDeferResetFtraceEvent&) const;
  bool operator!=(const MmCompactionDeferResetFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  uint32_t idx() const { return idx_; }
  void set_idx(uint32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_order() const { return _has_field_[3]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(3); }

  bool has_considered() const { return _has_field_[4]; }
  uint32_t considered() const { return considered_; }
  void set_considered(uint32_t value) { considered_ = value; _has_field_.set(4); }

  bool has_defer_shift() const { return _has_field_[5]; }
  uint32_t defer_shift() const { return defer_shift_; }
  void set_defer_shift(uint32_t value) { defer_shift_ = value; _has_field_.set(5); }

  bool has_order_failed() const { return _has_field_[6]; }
  int32_t order_failed() const { return order_failed_; }
  void set_order_failed(int32_t value) { order_failed_ = value; _has_field_.set(6); }

 private:
  int32_t nid_{};
  uint32_t idx_{};
  int32_t order_{};
  uint32_t considered_{};
  uint32_t defer_shift_{};
  int32_t order_failed_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionDeferredFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kIdxFieldNumber = 2,
    kOrderFieldNumber = 3,
    kConsideredFieldNumber = 4,
    kDeferShiftFieldNumber = 5,
    kOrderFailedFieldNumber = 6,
  };

  MmCompactionDeferredFtraceEvent();
  ~MmCompactionDeferredFtraceEvent() override;
  MmCompactionDeferredFtraceEvent(MmCompactionDeferredFtraceEvent&&) noexcept;
  MmCompactionDeferredFtraceEvent& operator=(MmCompactionDeferredFtraceEvent&&);
  MmCompactionDeferredFtraceEvent(const MmCompactionDeferredFtraceEvent&);
  MmCompactionDeferredFtraceEvent& operator=(const MmCompactionDeferredFtraceEvent&);
  bool operator==(const MmCompactionDeferredFtraceEvent&) const;
  bool operator!=(const MmCompactionDeferredFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  uint32_t idx() const { return idx_; }
  void set_idx(uint32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_order() const { return _has_field_[3]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(3); }

  bool has_considered() const { return _has_field_[4]; }
  uint32_t considered() const { return considered_; }
  void set_considered(uint32_t value) { considered_ = value; _has_field_.set(4); }

  bool has_defer_shift() const { return _has_field_[5]; }
  uint32_t defer_shift() const { return defer_shift_; }
  void set_defer_shift(uint32_t value) { defer_shift_ = value; _has_field_.set(5); }

  bool has_order_failed() const { return _has_field_[6]; }
  int32_t order_failed() const { return order_failed_; }
  void set_order_failed(int32_t value) { order_failed_ = value; _has_field_.set(6); }

 private:
  int32_t nid_{};
  uint32_t idx_{};
  int32_t order_{};
  uint32_t considered_{};
  uint32_t defer_shift_{};
  int32_t order_failed_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionDeferCompactionFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNidFieldNumber = 1,
    kIdxFieldNumber = 2,
    kOrderFieldNumber = 3,
    kConsideredFieldNumber = 4,
    kDeferShiftFieldNumber = 5,
    kOrderFailedFieldNumber = 6,
  };

  MmCompactionDeferCompactionFtraceEvent();
  ~MmCompactionDeferCompactionFtraceEvent() override;
  MmCompactionDeferCompactionFtraceEvent(MmCompactionDeferCompactionFtraceEvent&&) noexcept;
  MmCompactionDeferCompactionFtraceEvent& operator=(MmCompactionDeferCompactionFtraceEvent&&);
  MmCompactionDeferCompactionFtraceEvent(const MmCompactionDeferCompactionFtraceEvent&);
  MmCompactionDeferCompactionFtraceEvent& operator=(const MmCompactionDeferCompactionFtraceEvent&);
  bool operator==(const MmCompactionDeferCompactionFtraceEvent&) const;
  bool operator!=(const MmCompactionDeferCompactionFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nid() const { return _has_field_[1]; }
  int32_t nid() const { return nid_; }
  void set_nid(int32_t value) { nid_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  uint32_t idx() const { return idx_; }
  void set_idx(uint32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_order() const { return _has_field_[3]; }
  int32_t order() const { return order_; }
  void set_order(int32_t value) { order_ = value; _has_field_.set(3); }

  bool has_considered() const { return _has_field_[4]; }
  uint32_t considered() const { return considered_; }
  void set_considered(uint32_t value) { considered_ = value; _has_field_.set(4); }

  bool has_defer_shift() const { return _has_field_[5]; }
  uint32_t defer_shift() const { return defer_shift_; }
  void set_defer_shift(uint32_t value) { defer_shift_ = value; _has_field_.set(5); }

  bool has_order_failed() const { return _has_field_[6]; }
  int32_t order_failed() const { return order_failed_; }
  void set_order_failed(int32_t value) { order_failed_ = value; _has_field_.set(6); }

 private:
  int32_t nid_{};
  uint32_t idx_{};
  int32_t order_{};
  uint32_t considered_{};
  uint32_t defer_shift_{};
  int32_t order_failed_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT MmCompactionBeginFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kZoneStartFieldNumber = 1,
    kMigratePfnFieldNumber = 2,
    kFreePfnFieldNumber = 3,
    kZoneEndFieldNumber = 4,
    kSyncFieldNumber = 5,
  };

  MmCompactionBeginFtraceEvent();
  ~MmCompactionBeginFtraceEvent() override;
  MmCompactionBeginFtraceEvent(MmCompactionBeginFtraceEvent&&) noexcept;
  MmCompactionBeginFtraceEvent& operator=(MmCompactionBeginFtraceEvent&&);
  MmCompactionBeginFtraceEvent(const MmCompactionBeginFtraceEvent&);
  MmCompactionBeginFtraceEvent& operator=(const MmCompactionBeginFtraceEvent&);
  bool operator==(const MmCompactionBeginFtraceEvent&) const;
  bool operator!=(const MmCompactionBeginFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_zone_start() const { return _has_field_[1]; }
  uint64_t zone_start() const { return zone_start_; }
  void set_zone_start(uint64_t value) { zone_start_ = value; _has_field_.set(1); }

  bool has_migrate_pfn() const { return _has_field_[2]; }
  uint64_t migrate_pfn() const { return migrate_pfn_; }
  void set_migrate_pfn(uint64_t value) { migrate_pfn_ = value; _has_field_.set(2); }

  bool has_free_pfn() const { return _has_field_[3]; }
  uint64_t free_pfn() const { return free_pfn_; }
  void set_free_pfn(uint64_t value) { free_pfn_ = value; _has_field_.set(3); }

  bool has_zone_end() const { return _has_field_[4]; }
  uint64_t zone_end() const { return zone_end_; }
  void set_zone_end(uint64_t value) { zone_end_ = value; _has_field_.set(4); }

  bool has_sync() const { return _has_field_[5]; }
  uint32_t sync() const { return sync_; }
  void set_sync(uint32_t value) { sync_ = value; _has_field_.set(5); }

 private:
  uint64_t zone_start_{};
  uint64_t migrate_pfn_{};
  uint64_t free_pfn_{};
  uint64_t zone_end_{};
  uint32_t sync_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_COMPACTION_PROTO_CPP_H_
