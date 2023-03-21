// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_CPUHP_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_CPUHP_PROTO_CPP_H_

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
class CpuhpPauseFtraceEvent;
class CpuhpLatencyFtraceEvent;
class CpuhpEnterFtraceEvent;
class CpuhpMultiEnterFtraceEvent;
class CpuhpExitFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT CpuhpPauseFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kActiveCpusFieldNumber = 1,
    kCpusFieldNumber = 2,
    kPauseFieldNumber = 3,
    kTimeFieldNumber = 4,
  };

  CpuhpPauseFtraceEvent();
  ~CpuhpPauseFtraceEvent() override;
  CpuhpPauseFtraceEvent(CpuhpPauseFtraceEvent&&) noexcept;
  CpuhpPauseFtraceEvent& operator=(CpuhpPauseFtraceEvent&&);
  CpuhpPauseFtraceEvent(const CpuhpPauseFtraceEvent&);
  CpuhpPauseFtraceEvent& operator=(const CpuhpPauseFtraceEvent&);
  bool operator==(const CpuhpPauseFtraceEvent&) const;
  bool operator!=(const CpuhpPauseFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_active_cpus() const { return _has_field_[1]; }
  uint32_t active_cpus() const { return active_cpus_; }
  void set_active_cpus(uint32_t value) { active_cpus_ = value; _has_field_.set(1); }

  bool has_cpus() const { return _has_field_[2]; }
  uint32_t cpus() const { return cpus_; }
  void set_cpus(uint32_t value) { cpus_ = value; _has_field_.set(2); }

  bool has_pause() const { return _has_field_[3]; }
  uint32_t pause() const { return pause_; }
  void set_pause(uint32_t value) { pause_ = value; _has_field_.set(3); }

  bool has_time() const { return _has_field_[4]; }
  uint32_t time() const { return time_; }
  void set_time(uint32_t value) { time_ = value; _has_field_.set(4); }

 private:
  uint32_t active_cpus_{};
  uint32_t cpus_{};
  uint32_t pause_{};
  uint32_t time_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuhpLatencyFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCpuFieldNumber = 1,
    kRetFieldNumber = 2,
    kStateFieldNumber = 3,
    kTimeFieldNumber = 4,
  };

  CpuhpLatencyFtraceEvent();
  ~CpuhpLatencyFtraceEvent() override;
  CpuhpLatencyFtraceEvent(CpuhpLatencyFtraceEvent&&) noexcept;
  CpuhpLatencyFtraceEvent& operator=(CpuhpLatencyFtraceEvent&&);
  CpuhpLatencyFtraceEvent(const CpuhpLatencyFtraceEvent&);
  CpuhpLatencyFtraceEvent& operator=(const CpuhpLatencyFtraceEvent&);
  bool operator==(const CpuhpLatencyFtraceEvent&) const;
  bool operator!=(const CpuhpLatencyFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_cpu() const { return _has_field_[1]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(1); }

  bool has_ret() const { return _has_field_[2]; }
  int32_t ret() const { return ret_; }
  void set_ret(int32_t value) { ret_ = value; _has_field_.set(2); }

  bool has_state() const { return _has_field_[3]; }
  uint32_t state() const { return state_; }
  void set_state(uint32_t value) { state_ = value; _has_field_.set(3); }

  bool has_time() const { return _has_field_[4]; }
  uint64_t time() const { return time_; }
  void set_time(uint64_t value) { time_ = value; _has_field_.set(4); }

 private:
  uint32_t cpu_{};
  int32_t ret_{};
  uint32_t state_{};
  uint64_t time_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuhpEnterFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCpuFieldNumber = 1,
    kFunFieldNumber = 2,
    kIdxFieldNumber = 3,
    kTargetFieldNumber = 4,
  };

  CpuhpEnterFtraceEvent();
  ~CpuhpEnterFtraceEvent() override;
  CpuhpEnterFtraceEvent(CpuhpEnterFtraceEvent&&) noexcept;
  CpuhpEnterFtraceEvent& operator=(CpuhpEnterFtraceEvent&&);
  CpuhpEnterFtraceEvent(const CpuhpEnterFtraceEvent&);
  CpuhpEnterFtraceEvent& operator=(const CpuhpEnterFtraceEvent&);
  bool operator==(const CpuhpEnterFtraceEvent&) const;
  bool operator!=(const CpuhpEnterFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_cpu() const { return _has_field_[1]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(1); }

  bool has_fun() const { return _has_field_[2]; }
  uint64_t fun() const { return fun_; }
  void set_fun(uint64_t value) { fun_ = value; _has_field_.set(2); }

  bool has_idx() const { return _has_field_[3]; }
  int32_t idx() const { return idx_; }
  void set_idx(int32_t value) { idx_ = value; _has_field_.set(3); }

  bool has_target() const { return _has_field_[4]; }
  int32_t target() const { return target_; }
  void set_target(int32_t value) { target_ = value; _has_field_.set(4); }

 private:
  uint32_t cpu_{};
  uint64_t fun_{};
  int32_t idx_{};
  int32_t target_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuhpMultiEnterFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCpuFieldNumber = 1,
    kFunFieldNumber = 2,
    kIdxFieldNumber = 3,
    kTargetFieldNumber = 4,
  };

  CpuhpMultiEnterFtraceEvent();
  ~CpuhpMultiEnterFtraceEvent() override;
  CpuhpMultiEnterFtraceEvent(CpuhpMultiEnterFtraceEvent&&) noexcept;
  CpuhpMultiEnterFtraceEvent& operator=(CpuhpMultiEnterFtraceEvent&&);
  CpuhpMultiEnterFtraceEvent(const CpuhpMultiEnterFtraceEvent&);
  CpuhpMultiEnterFtraceEvent& operator=(const CpuhpMultiEnterFtraceEvent&);
  bool operator==(const CpuhpMultiEnterFtraceEvent&) const;
  bool operator!=(const CpuhpMultiEnterFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_cpu() const { return _has_field_[1]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(1); }

  bool has_fun() const { return _has_field_[2]; }
  uint64_t fun() const { return fun_; }
  void set_fun(uint64_t value) { fun_ = value; _has_field_.set(2); }

  bool has_idx() const { return _has_field_[3]; }
  int32_t idx() const { return idx_; }
  void set_idx(int32_t value) { idx_ = value; _has_field_.set(3); }

  bool has_target() const { return _has_field_[4]; }
  int32_t target() const { return target_; }
  void set_target(int32_t value) { target_ = value; _has_field_.set(4); }

 private:
  uint32_t cpu_{};
  uint64_t fun_{};
  int32_t idx_{};
  int32_t target_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuhpExitFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCpuFieldNumber = 1,
    kIdxFieldNumber = 2,
    kRetFieldNumber = 3,
    kStateFieldNumber = 4,
  };

  CpuhpExitFtraceEvent();
  ~CpuhpExitFtraceEvent() override;
  CpuhpExitFtraceEvent(CpuhpExitFtraceEvent&&) noexcept;
  CpuhpExitFtraceEvent& operator=(CpuhpExitFtraceEvent&&);
  CpuhpExitFtraceEvent(const CpuhpExitFtraceEvent&);
  CpuhpExitFtraceEvent& operator=(const CpuhpExitFtraceEvent&);
  bool operator==(const CpuhpExitFtraceEvent&) const;
  bool operator!=(const CpuhpExitFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_cpu() const { return _has_field_[1]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(1); }

  bool has_idx() const { return _has_field_[2]; }
  int32_t idx() const { return idx_; }
  void set_idx(int32_t value) { idx_ = value; _has_field_.set(2); }

  bool has_ret() const { return _has_field_[3]; }
  int32_t ret() const { return ret_; }
  void set_ret(int32_t value) { ret_ = value; _has_field_.set(3); }

  bool has_state() const { return _has_field_[4]; }
  int32_t state() const { return state_; }
  void set_state(int32_t value) { state_ = value; _has_field_.set(4); }

 private:
  uint32_t cpu_{};
  int32_t idx_{};
  int32_t ret_{};
  int32_t state_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_CPUHP_PROTO_CPP_H_
