// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_SYNC_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_SYNC_PROTO_CPP_H_

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
class SyncWaitFtraceEvent;
class SyncTimelineFtraceEvent;
class SyncPtFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT SyncWaitFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStatusFieldNumber = 2,
    kBeginFieldNumber = 3,
  };

  SyncWaitFtraceEvent();
  ~SyncWaitFtraceEvent() override;
  SyncWaitFtraceEvent(SyncWaitFtraceEvent&&) noexcept;
  SyncWaitFtraceEvent& operator=(SyncWaitFtraceEvent&&);
  SyncWaitFtraceEvent(const SyncWaitFtraceEvent&);
  SyncWaitFtraceEvent& operator=(const SyncWaitFtraceEvent&);
  bool operator==(const SyncWaitFtraceEvent&) const;
  bool operator!=(const SyncWaitFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_status() const { return _has_field_[2]; }
  int32_t status() const { return status_; }
  void set_status(int32_t value) { status_ = value; _has_field_.set(2); }

  bool has_begin() const { return _has_field_[3]; }
  uint32_t begin() const { return begin_; }
  void set_begin(uint32_t value) { begin_ = value; _has_field_.set(3); }

 private:
  std::string name_{};
  int32_t status_{};
  uint32_t begin_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT SyncTimelineFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };

  SyncTimelineFtraceEvent();
  ~SyncTimelineFtraceEvent() override;
  SyncTimelineFtraceEvent(SyncTimelineFtraceEvent&&) noexcept;
  SyncTimelineFtraceEvent& operator=(SyncTimelineFtraceEvent&&);
  SyncTimelineFtraceEvent(const SyncTimelineFtraceEvent&);
  SyncTimelineFtraceEvent& operator=(const SyncTimelineFtraceEvent&);
  bool operator==(const SyncTimelineFtraceEvent&) const;
  bool operator!=(const SyncTimelineFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_value() const { return _has_field_[2]; }
  const std::string& value() const { return value_; }
  void set_value(const std::string& value) { value_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  std::string value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT SyncPtFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kTimelineFieldNumber = 1,
    kValueFieldNumber = 2,
  };

  SyncPtFtraceEvent();
  ~SyncPtFtraceEvent() override;
  SyncPtFtraceEvent(SyncPtFtraceEvent&&) noexcept;
  SyncPtFtraceEvent& operator=(SyncPtFtraceEvent&&);
  SyncPtFtraceEvent(const SyncPtFtraceEvent&);
  SyncPtFtraceEvent& operator=(const SyncPtFtraceEvent&);
  bool operator==(const SyncPtFtraceEvent&) const;
  bool operator!=(const SyncPtFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_timeline() const { return _has_field_[1]; }
  const std::string& timeline() const { return timeline_; }
  void set_timeline(const std::string& value) { timeline_ = value; _has_field_.set(1); }

  bool has_value() const { return _has_field_[2]; }
  const std::string& value() const { return value_; }
  void set_value(const std::string& value) { value_ = value; _has_field_.set(2); }

 private:
  std::string timeline_{};
  std::string value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_SYNC_PROTO_CPP_H_
