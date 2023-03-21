#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_application_state_info.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeApplicationStateInfo::ChromeApplicationStateInfo() = default;
ChromeApplicationStateInfo::~ChromeApplicationStateInfo() = default;
ChromeApplicationStateInfo::ChromeApplicationStateInfo(const ChromeApplicationStateInfo&) = default;
ChromeApplicationStateInfo& ChromeApplicationStateInfo::operator=(const ChromeApplicationStateInfo&) = default;
ChromeApplicationStateInfo::ChromeApplicationStateInfo(ChromeApplicationStateInfo&&) noexcept = default;
ChromeApplicationStateInfo& ChromeApplicationStateInfo::operator=(ChromeApplicationStateInfo&&) = default;

bool ChromeApplicationStateInfo::operator==(const ChromeApplicationStateInfo& other) const {
  return unknown_fields_ == other.unknown_fields_
   && application_state_ == other.application_state_;
}

bool ChromeApplicationStateInfo::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* application_state */:
        field.get(&application_state_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeApplicationStateInfo::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeApplicationStateInfo::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeApplicationStateInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: application_state
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, application_state_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
