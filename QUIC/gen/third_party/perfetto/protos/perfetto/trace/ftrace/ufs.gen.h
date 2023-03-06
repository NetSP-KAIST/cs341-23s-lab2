// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_UFS_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_UFS_PROTO_CPP_H_

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
class UfshcdClkGatingFtraceEvent;
class UfshcdCommandFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT UfshcdClkGatingFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDevNameFieldNumber = 1,
    kStateFieldNumber = 2,
  };

  UfshcdClkGatingFtraceEvent();
  ~UfshcdClkGatingFtraceEvent() override;
  UfshcdClkGatingFtraceEvent(UfshcdClkGatingFtraceEvent&&) noexcept;
  UfshcdClkGatingFtraceEvent& operator=(UfshcdClkGatingFtraceEvent&&);
  UfshcdClkGatingFtraceEvent(const UfshcdClkGatingFtraceEvent&);
  UfshcdClkGatingFtraceEvent& operator=(const UfshcdClkGatingFtraceEvent&);
  bool operator==(const UfshcdClkGatingFtraceEvent&) const;
  bool operator!=(const UfshcdClkGatingFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_dev_name() const { return _has_field_[1]; }
  const std::string& dev_name() const { return dev_name_; }
  void set_dev_name(const std::string& value) { dev_name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  int32_t state() const { return state_; }
  void set_state(int32_t value) { state_ = value; _has_field_.set(2); }

 private:
  std::string dev_name_{};
  int32_t state_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT UfshcdCommandFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDevNameFieldNumber = 1,
    kDoorbellFieldNumber = 2,
    kIntrFieldNumber = 3,
    kLbaFieldNumber = 4,
    kOpcodeFieldNumber = 5,
    kStrFieldNumber = 6,
    kTagFieldNumber = 7,
    kTransferLenFieldNumber = 8,
    kGroupIdFieldNumber = 9,
    kStrTFieldNumber = 10,
  };

  UfshcdCommandFtraceEvent();
  ~UfshcdCommandFtraceEvent() override;
  UfshcdCommandFtraceEvent(UfshcdCommandFtraceEvent&&) noexcept;
  UfshcdCommandFtraceEvent& operator=(UfshcdCommandFtraceEvent&&);
  UfshcdCommandFtraceEvent(const UfshcdCommandFtraceEvent&);
  UfshcdCommandFtraceEvent& operator=(const UfshcdCommandFtraceEvent&);
  bool operator==(const UfshcdCommandFtraceEvent&) const;
  bool operator!=(const UfshcdCommandFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_dev_name() const { return _has_field_[1]; }
  const std::string& dev_name() const { return dev_name_; }
  void set_dev_name(const std::string& value) { dev_name_ = value; _has_field_.set(1); }

  bool has_doorbell() const { return _has_field_[2]; }
  uint32_t doorbell() const { return doorbell_; }
  void set_doorbell(uint32_t value) { doorbell_ = value; _has_field_.set(2); }

  bool has_intr() const { return _has_field_[3]; }
  uint32_t intr() const { return intr_; }
  void set_intr(uint32_t value) { intr_ = value; _has_field_.set(3); }

  bool has_lba() const { return _has_field_[4]; }
  uint64_t lba() const { return lba_; }
  void set_lba(uint64_t value) { lba_ = value; _has_field_.set(4); }

  bool has_opcode() const { return _has_field_[5]; }
  uint32_t opcode() const { return opcode_; }
  void set_opcode(uint32_t value) { opcode_ = value; _has_field_.set(5); }

  bool has_str() const { return _has_field_[6]; }
  const std::string& str() const { return str_; }
  void set_str(const std::string& value) { str_ = value; _has_field_.set(6); }

  bool has_tag() const { return _has_field_[7]; }
  uint32_t tag() const { return tag_; }
  void set_tag(uint32_t value) { tag_ = value; _has_field_.set(7); }

  bool has_transfer_len() const { return _has_field_[8]; }
  int32_t transfer_len() const { return transfer_len_; }
  void set_transfer_len(int32_t value) { transfer_len_ = value; _has_field_.set(8); }

  bool has_group_id() const { return _has_field_[9]; }
  uint32_t group_id() const { return group_id_; }
  void set_group_id(uint32_t value) { group_id_ = value; _has_field_.set(9); }

  bool has_str_t() const { return _has_field_[10]; }
  uint32_t str_t() const { return str_t_; }
  void set_str_t(uint32_t value) { str_t_ = value; _has_field_.set(10); }

 private:
  std::string dev_name_{};
  uint32_t doorbell_{};
  uint32_t intr_{};
  uint64_t lba_{};
  uint32_t opcode_{};
  std::string str_{};
  uint32_t tag_{};
  int32_t transfer_len_{};
  uint32_t group_id_{};
  uint32_t str_t_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<11> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_UFS_PROTO_CPP_H_