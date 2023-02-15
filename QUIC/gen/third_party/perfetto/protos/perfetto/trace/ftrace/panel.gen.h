// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_PANEL_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_PANEL_PROTO_CPP_H_

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
class DsiTxFtraceEvent;
class DsiRxFtraceEvent;
class DsiCmdFifoStatusFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DsiTxFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kLastFieldNumber = 1,
    kTxBufFieldNumber = 2,
    kTypeFieldNumber = 3,
  };

  DsiTxFtraceEvent();
  ~DsiTxFtraceEvent() override;
  DsiTxFtraceEvent(DsiTxFtraceEvent&&) noexcept;
  DsiTxFtraceEvent& operator=(DsiTxFtraceEvent&&);
  DsiTxFtraceEvent(const DsiTxFtraceEvent&);
  DsiTxFtraceEvent& operator=(const DsiTxFtraceEvent&);
  bool operator==(const DsiTxFtraceEvent&) const;
  bool operator!=(const DsiTxFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_last() const { return _has_field_[1]; }
  uint32_t last() const { return last_; }
  void set_last(uint32_t value) { last_ = value; _has_field_.set(1); }

  bool has_tx_buf() const { return _has_field_[2]; }
  uint32_t tx_buf() const { return tx_buf_; }
  void set_tx_buf(uint32_t value) { tx_buf_ = value; _has_field_.set(2); }

  bool has_type() const { return _has_field_[3]; }
  uint32_t type() const { return type_; }
  void set_type(uint32_t value) { type_ = value; _has_field_.set(3); }

 private:
  uint32_t last_{};
  uint32_t tx_buf_{};
  uint32_t type_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT DsiRxFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCmdFieldNumber = 1,
    kRxBufFieldNumber = 2,
  };

  DsiRxFtraceEvent();
  ~DsiRxFtraceEvent() override;
  DsiRxFtraceEvent(DsiRxFtraceEvent&&) noexcept;
  DsiRxFtraceEvent& operator=(DsiRxFtraceEvent&&);
  DsiRxFtraceEvent(const DsiRxFtraceEvent&);
  DsiRxFtraceEvent& operator=(const DsiRxFtraceEvent&);
  bool operator==(const DsiRxFtraceEvent&) const;
  bool operator!=(const DsiRxFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_cmd() const { return _has_field_[1]; }
  uint32_t cmd() const { return cmd_; }
  void set_cmd(uint32_t value) { cmd_ = value; _has_field_.set(1); }

  bool has_rx_buf() const { return _has_field_[2]; }
  uint32_t rx_buf() const { return rx_buf_; }
  void set_rx_buf(uint32_t value) { rx_buf_ = value; _has_field_.set(2); }

 private:
  uint32_t cmd_{};
  uint32_t rx_buf_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT DsiCmdFifoStatusFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kHeaderFieldNumber = 1,
    kPayloadFieldNumber = 2,
  };

  DsiCmdFifoStatusFtraceEvent();
  ~DsiCmdFifoStatusFtraceEvent() override;
  DsiCmdFifoStatusFtraceEvent(DsiCmdFifoStatusFtraceEvent&&) noexcept;
  DsiCmdFifoStatusFtraceEvent& operator=(DsiCmdFifoStatusFtraceEvent&&);
  DsiCmdFifoStatusFtraceEvent(const DsiCmdFifoStatusFtraceEvent&);
  DsiCmdFifoStatusFtraceEvent& operator=(const DsiCmdFifoStatusFtraceEvent&);
  bool operator==(const DsiCmdFifoStatusFtraceEvent&) const;
  bool operator!=(const DsiCmdFifoStatusFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_header() const { return _has_field_[1]; }
  uint32_t header() const { return header_; }
  void set_header(uint32_t value) { header_ = value; _has_field_.set(1); }

  bool has_payload() const { return _has_field_[2]; }
  uint32_t payload() const { return payload_; }
  void set_payload(uint32_t value) { payload_ = value; _has_field_.set(2); }

 private:
  uint32_t header_{};
  uint32_t payload_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_PANEL_PROTO_CPP_H_
