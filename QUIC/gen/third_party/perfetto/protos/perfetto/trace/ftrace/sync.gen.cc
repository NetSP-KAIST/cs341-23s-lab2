#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/ftrace/sync.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

SyncWaitFtraceEvent::SyncWaitFtraceEvent() = default;
SyncWaitFtraceEvent::~SyncWaitFtraceEvent() = default;
SyncWaitFtraceEvent::SyncWaitFtraceEvent(const SyncWaitFtraceEvent&) = default;
SyncWaitFtraceEvent& SyncWaitFtraceEvent::operator=(const SyncWaitFtraceEvent&) = default;
SyncWaitFtraceEvent::SyncWaitFtraceEvent(SyncWaitFtraceEvent&&) noexcept = default;
SyncWaitFtraceEvent& SyncWaitFtraceEvent::operator=(SyncWaitFtraceEvent&&) = default;

bool SyncWaitFtraceEvent::operator==(const SyncWaitFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && status_ == other.status_
   && begin_ == other.begin_;
}

bool SyncWaitFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        field.get(&name_);
        break;
      case 2 /* status */:
        field.get(&status_);
        break;
      case 3 /* begin */:
        field.get(&begin_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncWaitFtraceEvent::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncWaitFtraceEvent::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncWaitFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    msg->AppendString(1, name_);
  }

  // Field 2: status
  if (_has_field_[2]) {
    msg->AppendVarInt(2, status_);
  }

  // Field 3: begin
  if (_has_field_[3]) {
    msg->AppendVarInt(3, begin_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


SyncTimelineFtraceEvent::SyncTimelineFtraceEvent() = default;
SyncTimelineFtraceEvent::~SyncTimelineFtraceEvent() = default;
SyncTimelineFtraceEvent::SyncTimelineFtraceEvent(const SyncTimelineFtraceEvent&) = default;
SyncTimelineFtraceEvent& SyncTimelineFtraceEvent::operator=(const SyncTimelineFtraceEvent&) = default;
SyncTimelineFtraceEvent::SyncTimelineFtraceEvent(SyncTimelineFtraceEvent&&) noexcept = default;
SyncTimelineFtraceEvent& SyncTimelineFtraceEvent::operator=(SyncTimelineFtraceEvent&&) = default;

bool SyncTimelineFtraceEvent::operator==(const SyncTimelineFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && value_ == other.value_;
}

bool SyncTimelineFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        field.get(&name_);
        break;
      case 2 /* value */:
        field.get(&value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncTimelineFtraceEvent::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncTimelineFtraceEvent::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncTimelineFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    msg->AppendString(1, name_);
  }

  // Field 2: value
  if (_has_field_[2]) {
    msg->AppendString(2, value_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


SyncPtFtraceEvent::SyncPtFtraceEvent() = default;
SyncPtFtraceEvent::~SyncPtFtraceEvent() = default;
SyncPtFtraceEvent::SyncPtFtraceEvent(const SyncPtFtraceEvent&) = default;
SyncPtFtraceEvent& SyncPtFtraceEvent::operator=(const SyncPtFtraceEvent&) = default;
SyncPtFtraceEvent::SyncPtFtraceEvent(SyncPtFtraceEvent&&) noexcept = default;
SyncPtFtraceEvent& SyncPtFtraceEvent::operator=(SyncPtFtraceEvent&&) = default;

bool SyncPtFtraceEvent::operator==(const SyncPtFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && timeline_ == other.timeline_
   && value_ == other.value_;
}

bool SyncPtFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* timeline */:
        field.get(&timeline_);
        break;
      case 2 /* value */:
        field.get(&value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncPtFtraceEvent::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncPtFtraceEvent::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncPtFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: timeline
  if (_has_field_[1]) {
    msg->AppendString(1, timeline_);
  }

  // Field 2: value
  if (_has_field_[2]) {
    msg->AppendString(2, value_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif