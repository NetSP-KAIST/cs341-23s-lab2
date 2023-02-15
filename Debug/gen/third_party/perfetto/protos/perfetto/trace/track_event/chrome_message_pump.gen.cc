#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_message_pump.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeMessagePump::ChromeMessagePump() = default;
ChromeMessagePump::~ChromeMessagePump() = default;
ChromeMessagePump::ChromeMessagePump(const ChromeMessagePump&) = default;
ChromeMessagePump& ChromeMessagePump::operator=(const ChromeMessagePump&) = default;
ChromeMessagePump::ChromeMessagePump(ChromeMessagePump&&) noexcept = default;
ChromeMessagePump& ChromeMessagePump::operator=(ChromeMessagePump&&) = default;

bool ChromeMessagePump::operator==(const ChromeMessagePump& other) const {
  return unknown_fields_ == other.unknown_fields_
   && sent_messages_in_queue_ == other.sent_messages_in_queue_
   && io_handler_location_iid_ == other.io_handler_location_iid_;
}

bool ChromeMessagePump::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* sent_messages_in_queue */:
        field.get(&sent_messages_in_queue_);
        break;
      case 2 /* io_handler_location_iid */:
        field.get(&io_handler_location_iid_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeMessagePump::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeMessagePump::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeMessagePump::Serialize(::protozero::Message* msg) const {
  // Field 1: sent_messages_in_queue
  if (_has_field_[1]) {
    msg->AppendTinyVarInt(1, sent_messages_in_queue_);
  }

  // Field 2: io_handler_location_iid
  if (_has_field_[2]) {
    msg->AppendVarInt(2, io_handler_location_iid_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
