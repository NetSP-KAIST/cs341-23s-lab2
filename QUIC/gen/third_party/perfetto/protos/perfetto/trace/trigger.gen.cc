#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/trigger.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

Trigger::Trigger() = default;
Trigger::~Trigger() = default;
Trigger::Trigger(const Trigger&) = default;
Trigger& Trigger::operator=(const Trigger&) = default;
Trigger::Trigger(Trigger&&) noexcept = default;
Trigger& Trigger::operator=(Trigger&&) = default;

bool Trigger::operator==(const Trigger& other) const {
  return unknown_fields_ == other.unknown_fields_
   && trigger_name_ == other.trigger_name_
   && producer_name_ == other.producer_name_
   && trusted_producer_uid_ == other.trusted_producer_uid_;
}

bool Trigger::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* trigger_name */:
        field.get(&trigger_name_);
        break;
      case 2 /* producer_name */:
        field.get(&producer_name_);
        break;
      case 3 /* trusted_producer_uid */:
        field.get(&trusted_producer_uid_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string Trigger::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> Trigger::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void Trigger::Serialize(::protozero::Message* msg) const {
  // Field 1: trigger_name
  if (_has_field_[1]) {
    msg->AppendString(1, trigger_name_);
  }

  // Field 2: producer_name
  if (_has_field_[2]) {
    msg->AppendString(2, producer_name_);
  }

  // Field 3: trusted_producer_uid
  if (_has_field_[3]) {
    msg->AppendVarInt(3, trusted_producer_uid_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
