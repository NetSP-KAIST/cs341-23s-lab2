// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DPU_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DPU_PROTO_CPP_H_

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
class DpuTracingMarkWriteFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DpuTracingMarkWriteFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kPidFieldNumber = 1,
    kTraceNameFieldNumber = 2,
    kTraceBeginFieldNumber = 3,
    kNameFieldNumber = 4,
    kTypeFieldNumber = 5,
    kValueFieldNumber = 6,
  };

  DpuTracingMarkWriteFtraceEvent();
  ~DpuTracingMarkWriteFtraceEvent() override;
  DpuTracingMarkWriteFtraceEvent(DpuTracingMarkWriteFtraceEvent&&) noexcept;
  DpuTracingMarkWriteFtraceEvent& operator=(DpuTracingMarkWriteFtraceEvent&&);
  DpuTracingMarkWriteFtraceEvent(const DpuTracingMarkWriteFtraceEvent&);
  DpuTracingMarkWriteFtraceEvent& operator=(const DpuTracingMarkWriteFtraceEvent&);
  bool operator==(const DpuTracingMarkWriteFtraceEvent&) const;
  bool operator!=(const DpuTracingMarkWriteFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_pid() const { return _has_field_[1]; }
  int32_t pid() const { return pid_; }
  void set_pid(int32_t value) { pid_ = value; _has_field_.set(1); }

  bool has_trace_name() const { return _has_field_[2]; }
  const std::string& trace_name() const { return trace_name_; }
  void set_trace_name(const std::string& value) { trace_name_ = value; _has_field_.set(2); }

  bool has_trace_begin() const { return _has_field_[3]; }
  uint32_t trace_begin() const { return trace_begin_; }
  void set_trace_begin(uint32_t value) { trace_begin_ = value; _has_field_.set(3); }

  bool has_name() const { return _has_field_[4]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(4); }

  bool has_type() const { return _has_field_[5]; }
  uint32_t type() const { return type_; }
  void set_type(uint32_t value) { type_ = value; _has_field_.set(5); }

  bool has_value() const { return _has_field_[6]; }
  int32_t value() const { return value_; }
  void set_value(int32_t value) { value_ = value; _has_field_.set(6); }

 private:
  int32_t pid_{};
  std::string trace_name_{};
  uint32_t trace_begin_{};
  std::string name_{};
  uint32_t type_{};
  int32_t value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DPU_PROTO_CPP_H_
