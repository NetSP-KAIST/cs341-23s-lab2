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
#include "protos/perfetto/trace/ftrace/dma_fence.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

DmaFenceWaitEndFtraceEvent::DmaFenceWaitEndFtraceEvent() = default;
DmaFenceWaitEndFtraceEvent::~DmaFenceWaitEndFtraceEvent() = default;
DmaFenceWaitEndFtraceEvent::DmaFenceWaitEndFtraceEvent(const DmaFenceWaitEndFtraceEvent&) = default;
DmaFenceWaitEndFtraceEvent& DmaFenceWaitEndFtraceEvent::operator=(const DmaFenceWaitEndFtraceEvent&) = default;
DmaFenceWaitEndFtraceEvent::DmaFenceWaitEndFtraceEvent(DmaFenceWaitEndFtraceEvent&&) noexcept = default;
DmaFenceWaitEndFtraceEvent& DmaFenceWaitEndFtraceEvent::operator=(DmaFenceWaitEndFtraceEvent&&) = default;

bool DmaFenceWaitEndFtraceEvent::operator==(const DmaFenceWaitEndFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && context_ == other.context_
   && driver_ == other.driver_
   && seqno_ == other.seqno_
   && timeline_ == other.timeline_;
}

bool DmaFenceWaitEndFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* context */:
        field.get(&context_);
        break;
      case 2 /* driver */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &driver_);
        break;
      case 3 /* seqno */:
        field.get(&seqno_);
        break;
      case 4 /* timeline */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &timeline_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DmaFenceWaitEndFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DmaFenceWaitEndFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DmaFenceWaitEndFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: context
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, context_, msg);
  }

  // Field 2: driver
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, driver_, msg);
  }

  // Field 3: seqno
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seqno_, msg);
  }

  // Field 4: timeline
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, timeline_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DmaFenceWaitStartFtraceEvent::DmaFenceWaitStartFtraceEvent() = default;
DmaFenceWaitStartFtraceEvent::~DmaFenceWaitStartFtraceEvent() = default;
DmaFenceWaitStartFtraceEvent::DmaFenceWaitStartFtraceEvent(const DmaFenceWaitStartFtraceEvent&) = default;
DmaFenceWaitStartFtraceEvent& DmaFenceWaitStartFtraceEvent::operator=(const DmaFenceWaitStartFtraceEvent&) = default;
DmaFenceWaitStartFtraceEvent::DmaFenceWaitStartFtraceEvent(DmaFenceWaitStartFtraceEvent&&) noexcept = default;
DmaFenceWaitStartFtraceEvent& DmaFenceWaitStartFtraceEvent::operator=(DmaFenceWaitStartFtraceEvent&&) = default;

bool DmaFenceWaitStartFtraceEvent::operator==(const DmaFenceWaitStartFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && context_ == other.context_
   && driver_ == other.driver_
   && seqno_ == other.seqno_
   && timeline_ == other.timeline_;
}

bool DmaFenceWaitStartFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* context */:
        field.get(&context_);
        break;
      case 2 /* driver */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &driver_);
        break;
      case 3 /* seqno */:
        field.get(&seqno_);
        break;
      case 4 /* timeline */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &timeline_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DmaFenceWaitStartFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DmaFenceWaitStartFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DmaFenceWaitStartFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: context
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, context_, msg);
  }

  // Field 2: driver
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, driver_, msg);
  }

  // Field 3: seqno
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seqno_, msg);
  }

  // Field 4: timeline
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, timeline_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DmaFenceSignaledFtraceEvent::DmaFenceSignaledFtraceEvent() = default;
DmaFenceSignaledFtraceEvent::~DmaFenceSignaledFtraceEvent() = default;
DmaFenceSignaledFtraceEvent::DmaFenceSignaledFtraceEvent(const DmaFenceSignaledFtraceEvent&) = default;
DmaFenceSignaledFtraceEvent& DmaFenceSignaledFtraceEvent::operator=(const DmaFenceSignaledFtraceEvent&) = default;
DmaFenceSignaledFtraceEvent::DmaFenceSignaledFtraceEvent(DmaFenceSignaledFtraceEvent&&) noexcept = default;
DmaFenceSignaledFtraceEvent& DmaFenceSignaledFtraceEvent::operator=(DmaFenceSignaledFtraceEvent&&) = default;

bool DmaFenceSignaledFtraceEvent::operator==(const DmaFenceSignaledFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && context_ == other.context_
   && driver_ == other.driver_
   && seqno_ == other.seqno_
   && timeline_ == other.timeline_;
}

bool DmaFenceSignaledFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* context */:
        field.get(&context_);
        break;
      case 2 /* driver */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &driver_);
        break;
      case 3 /* seqno */:
        field.get(&seqno_);
        break;
      case 4 /* timeline */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &timeline_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DmaFenceSignaledFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DmaFenceSignaledFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DmaFenceSignaledFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: context
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, context_, msg);
  }

  // Field 2: driver
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, driver_, msg);
  }

  // Field 3: seqno
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seqno_, msg);
  }

  // Field 4: timeline
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, timeline_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DmaFenceEmitFtraceEvent::DmaFenceEmitFtraceEvent() = default;
DmaFenceEmitFtraceEvent::~DmaFenceEmitFtraceEvent() = default;
DmaFenceEmitFtraceEvent::DmaFenceEmitFtraceEvent(const DmaFenceEmitFtraceEvent&) = default;
DmaFenceEmitFtraceEvent& DmaFenceEmitFtraceEvent::operator=(const DmaFenceEmitFtraceEvent&) = default;
DmaFenceEmitFtraceEvent::DmaFenceEmitFtraceEvent(DmaFenceEmitFtraceEvent&&) noexcept = default;
DmaFenceEmitFtraceEvent& DmaFenceEmitFtraceEvent::operator=(DmaFenceEmitFtraceEvent&&) = default;

bool DmaFenceEmitFtraceEvent::operator==(const DmaFenceEmitFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && context_ == other.context_
   && driver_ == other.driver_
   && seqno_ == other.seqno_
   && timeline_ == other.timeline_;
}

bool DmaFenceEmitFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* context */:
        field.get(&context_);
        break;
      case 2 /* driver */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &driver_);
        break;
      case 3 /* seqno */:
        field.get(&seqno_);
        break;
      case 4 /* timeline */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &timeline_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DmaFenceEmitFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DmaFenceEmitFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DmaFenceEmitFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: context
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, context_, msg);
  }

  // Field 2: driver
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, driver_, msg);
  }

  // Field 3: seqno
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seqno_, msg);
  }

  // Field 4: timeline
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, timeline_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


DmaFenceInitFtraceEvent::DmaFenceInitFtraceEvent() = default;
DmaFenceInitFtraceEvent::~DmaFenceInitFtraceEvent() = default;
DmaFenceInitFtraceEvent::DmaFenceInitFtraceEvent(const DmaFenceInitFtraceEvent&) = default;
DmaFenceInitFtraceEvent& DmaFenceInitFtraceEvent::operator=(const DmaFenceInitFtraceEvent&) = default;
DmaFenceInitFtraceEvent::DmaFenceInitFtraceEvent(DmaFenceInitFtraceEvent&&) noexcept = default;
DmaFenceInitFtraceEvent& DmaFenceInitFtraceEvent::operator=(DmaFenceInitFtraceEvent&&) = default;

bool DmaFenceInitFtraceEvent::operator==(const DmaFenceInitFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && context_ == other.context_
   && driver_ == other.driver_
   && seqno_ == other.seqno_
   && timeline_ == other.timeline_;
}

bool DmaFenceInitFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* context */:
        field.get(&context_);
        break;
      case 2 /* driver */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &driver_);
        break;
      case 3 /* seqno */:
        field.get(&seqno_);
        break;
      case 4 /* timeline */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &timeline_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DmaFenceInitFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DmaFenceInitFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DmaFenceInitFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: context
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, context_, msg);
  }

  // Field 2: driver
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, driver_, msg);
  }

  // Field 3: seqno
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seqno_, msg);
  }

  // Field 4: timeline
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, timeline_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif