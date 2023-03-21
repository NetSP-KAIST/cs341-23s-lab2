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
#include "protos/perfetto/trace/android/initial_display_state.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

InitialDisplayState::InitialDisplayState() = default;
InitialDisplayState::~InitialDisplayState() = default;
InitialDisplayState::InitialDisplayState(const InitialDisplayState&) = default;
InitialDisplayState& InitialDisplayState::operator=(const InitialDisplayState&) = default;
InitialDisplayState::InitialDisplayState(InitialDisplayState&&) noexcept = default;
InitialDisplayState& InitialDisplayState::operator=(InitialDisplayState&&) = default;

bool InitialDisplayState::operator==(const InitialDisplayState& other) const {
  return unknown_fields_ == other.unknown_fields_
   && display_state_ == other.display_state_
   && brightness_ == other.brightness_;
}

bool InitialDisplayState::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* display_state */:
        field.get(&display_state_);
        break;
      case 2 /* brightness */:
        field.get(&brightness_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string InitialDisplayState::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> InitialDisplayState::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void InitialDisplayState::Serialize(::protozero::Message* msg) const {
  // Field 1: display_state
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, display_state_, msg);
  }

  // Field 2: brightness
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeFixed(2, brightness_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
