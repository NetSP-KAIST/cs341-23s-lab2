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
#include "protos/perfetto/trace/ftrace/synthetic.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent() = default;
RssStatThrottledFtraceEvent::~RssStatThrottledFtraceEvent() = default;
RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(const RssStatThrottledFtraceEvent&) = default;
RssStatThrottledFtraceEvent& RssStatThrottledFtraceEvent::operator=(const RssStatThrottledFtraceEvent&) = default;
RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(RssStatThrottledFtraceEvent&&) noexcept = default;
RssStatThrottledFtraceEvent& RssStatThrottledFtraceEvent::operator=(RssStatThrottledFtraceEvent&&) = default;

bool RssStatThrottledFtraceEvent::operator==(const RssStatThrottledFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && curr_ == other.curr_
   && member_ == other.member_
   && mm_id_ == other.mm_id_
   && size_ == other.size_;
}

bool RssStatThrottledFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* curr */:
        field.get(&curr_);
        break;
      case 2 /* member */:
        field.get(&member_);
        break;
      case 3 /* mm_id */:
        field.get(&mm_id_);
        break;
      case 4 /* size */:
        field.get(&size_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string RssStatThrottledFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> RssStatThrottledFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void RssStatThrottledFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: curr
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, curr_, msg);
  }

  // Field 2: member
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, member_, msg);
  }

  // Field 3: mm_id
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, mm_id_, msg);
  }

  // Field 4: size
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, size_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif