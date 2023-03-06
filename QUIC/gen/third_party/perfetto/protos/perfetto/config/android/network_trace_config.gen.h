// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_NETWORK_TRACE_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_NETWORK_TRACE_CONFIG_PROTO_CPP_H_

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
class NetworkPacketTraceConfig;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT NetworkPacketTraceConfig : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kPollMsFieldNumber = 1,
  };

  NetworkPacketTraceConfig();
  ~NetworkPacketTraceConfig() override;
  NetworkPacketTraceConfig(NetworkPacketTraceConfig&&) noexcept;
  NetworkPacketTraceConfig& operator=(NetworkPacketTraceConfig&&);
  NetworkPacketTraceConfig(const NetworkPacketTraceConfig&);
  NetworkPacketTraceConfig& operator=(const NetworkPacketTraceConfig&);
  bool operator==(const NetworkPacketTraceConfig&) const;
  bool operator!=(const NetworkPacketTraceConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_poll_ms() const { return _has_field_[1]; }
  uint32_t poll_ms() const { return poll_ms_; }
  void set_poll_ms(uint32_t value) { poll_ms_ = value; _has_field_.set(1); }

 private:
  uint32_t poll_ms_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_NETWORK_TRACE_CONFIG_PROTO_CPP_H_