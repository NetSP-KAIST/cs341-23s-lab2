#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/config/android/android_polled_state_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidPolledStateConfig::AndroidPolledStateConfig() = default;
AndroidPolledStateConfig::~AndroidPolledStateConfig() = default;
AndroidPolledStateConfig::AndroidPolledStateConfig(const AndroidPolledStateConfig&) = default;
AndroidPolledStateConfig& AndroidPolledStateConfig::operator=(const AndroidPolledStateConfig&) = default;
AndroidPolledStateConfig::AndroidPolledStateConfig(AndroidPolledStateConfig&&) noexcept = default;
AndroidPolledStateConfig& AndroidPolledStateConfig::operator=(AndroidPolledStateConfig&&) = default;

bool AndroidPolledStateConfig::operator==(const AndroidPolledStateConfig& other) const {
  return unknown_fields_ == other.unknown_fields_
   && poll_ms_ == other.poll_ms_;
}

bool AndroidPolledStateConfig::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* poll_ms */:
        field.get(&poll_ms_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidPolledStateConfig::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidPolledStateConfig::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidPolledStateConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: poll_ms
  if (_has_field_[1]) {
    msg->AppendVarInt(1, poll_ms_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
