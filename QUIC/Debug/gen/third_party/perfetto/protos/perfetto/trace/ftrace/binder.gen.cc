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
#include "protos/perfetto/trace/ftrace/binder.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

BinderTransactionAllocBufFtraceEvent::BinderTransactionAllocBufFtraceEvent() = default;
BinderTransactionAllocBufFtraceEvent::~BinderTransactionAllocBufFtraceEvent() = default;
BinderTransactionAllocBufFtraceEvent::BinderTransactionAllocBufFtraceEvent(const BinderTransactionAllocBufFtraceEvent&) = default;
BinderTransactionAllocBufFtraceEvent& BinderTransactionAllocBufFtraceEvent::operator=(const BinderTransactionAllocBufFtraceEvent&) = default;
BinderTransactionAllocBufFtraceEvent::BinderTransactionAllocBufFtraceEvent(BinderTransactionAllocBufFtraceEvent&&) noexcept = default;
BinderTransactionAllocBufFtraceEvent& BinderTransactionAllocBufFtraceEvent::operator=(BinderTransactionAllocBufFtraceEvent&&) = default;

bool BinderTransactionAllocBufFtraceEvent::operator==(const BinderTransactionAllocBufFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && data_size_ == other.data_size_
   && debug_id_ == other.debug_id_
   && offsets_size_ == other.offsets_size_
   && extra_buffers_size_ == other.extra_buffers_size_;
}

bool BinderTransactionAllocBufFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* data_size */:
        field.get(&data_size_);
        break;
      case 2 /* debug_id */:
        field.get(&debug_id_);
        break;
      case 3 /* offsets_size */:
        field.get(&offsets_size_);
        break;
      case 4 /* extra_buffers_size */:
        field.get(&extra_buffers_size_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderTransactionAllocBufFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderTransactionAllocBufFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderTransactionAllocBufFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: data_size
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, data_size_, msg);
  }

  // Field 2: debug_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, debug_id_, msg);
  }

  // Field 3: offsets_size
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, offsets_size_, msg);
  }

  // Field 4: extra_buffers_size
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, extra_buffers_size_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderUnlockFtraceEvent::BinderUnlockFtraceEvent() = default;
BinderUnlockFtraceEvent::~BinderUnlockFtraceEvent() = default;
BinderUnlockFtraceEvent::BinderUnlockFtraceEvent(const BinderUnlockFtraceEvent&) = default;
BinderUnlockFtraceEvent& BinderUnlockFtraceEvent::operator=(const BinderUnlockFtraceEvent&) = default;
BinderUnlockFtraceEvent::BinderUnlockFtraceEvent(BinderUnlockFtraceEvent&&) noexcept = default;
BinderUnlockFtraceEvent& BinderUnlockFtraceEvent::operator=(BinderUnlockFtraceEvent&&) = default;

bool BinderUnlockFtraceEvent::operator==(const BinderUnlockFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && tag_ == other.tag_;
}

bool BinderUnlockFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* tag */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderUnlockFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderUnlockFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderUnlockFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: tag
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, tag_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderLockedFtraceEvent::BinderLockedFtraceEvent() = default;
BinderLockedFtraceEvent::~BinderLockedFtraceEvent() = default;
BinderLockedFtraceEvent::BinderLockedFtraceEvent(const BinderLockedFtraceEvent&) = default;
BinderLockedFtraceEvent& BinderLockedFtraceEvent::operator=(const BinderLockedFtraceEvent&) = default;
BinderLockedFtraceEvent::BinderLockedFtraceEvent(BinderLockedFtraceEvent&&) noexcept = default;
BinderLockedFtraceEvent& BinderLockedFtraceEvent::operator=(BinderLockedFtraceEvent&&) = default;

bool BinderLockedFtraceEvent::operator==(const BinderLockedFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && tag_ == other.tag_;
}

bool BinderLockedFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* tag */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderLockedFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderLockedFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderLockedFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: tag
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, tag_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderLockFtraceEvent::BinderLockFtraceEvent() = default;
BinderLockFtraceEvent::~BinderLockFtraceEvent() = default;
BinderLockFtraceEvent::BinderLockFtraceEvent(const BinderLockFtraceEvent&) = default;
BinderLockFtraceEvent& BinderLockFtraceEvent::operator=(const BinderLockFtraceEvent&) = default;
BinderLockFtraceEvent::BinderLockFtraceEvent(BinderLockFtraceEvent&&) noexcept = default;
BinderLockFtraceEvent& BinderLockFtraceEvent::operator=(BinderLockFtraceEvent&&) = default;

bool BinderLockFtraceEvent::operator==(const BinderLockFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && tag_ == other.tag_;
}

bool BinderLockFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* tag */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderLockFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderLockFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderLockFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: tag
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, tag_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderSetPriorityFtraceEvent::BinderSetPriorityFtraceEvent() = default;
BinderSetPriorityFtraceEvent::~BinderSetPriorityFtraceEvent() = default;
BinderSetPriorityFtraceEvent::BinderSetPriorityFtraceEvent(const BinderSetPriorityFtraceEvent&) = default;
BinderSetPriorityFtraceEvent& BinderSetPriorityFtraceEvent::operator=(const BinderSetPriorityFtraceEvent&) = default;
BinderSetPriorityFtraceEvent::BinderSetPriorityFtraceEvent(BinderSetPriorityFtraceEvent&&) noexcept = default;
BinderSetPriorityFtraceEvent& BinderSetPriorityFtraceEvent::operator=(BinderSetPriorityFtraceEvent&&) = default;

bool BinderSetPriorityFtraceEvent::operator==(const BinderSetPriorityFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && proc_ == other.proc_
   && thread_ == other.thread_
   && old_prio_ == other.old_prio_
   && new_prio_ == other.new_prio_
   && desired_prio_ == other.desired_prio_;
}

bool BinderSetPriorityFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* proc */:
        field.get(&proc_);
        break;
      case 2 /* thread */:
        field.get(&thread_);
        break;
      case 3 /* old_prio */:
        field.get(&old_prio_);
        break;
      case 4 /* new_prio */:
        field.get(&new_prio_);
        break;
      case 5 /* desired_prio */:
        field.get(&desired_prio_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderSetPriorityFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderSetPriorityFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderSetPriorityFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: proc
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, proc_, msg);
  }

  // Field 2: thread
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, thread_, msg);
  }

  // Field 3: old_prio
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, old_prio_, msg);
  }

  // Field 4: new_prio
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, new_prio_, msg);
  }

  // Field 5: desired_prio
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, desired_prio_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderTransactionReceivedFtraceEvent::BinderTransactionReceivedFtraceEvent() = default;
BinderTransactionReceivedFtraceEvent::~BinderTransactionReceivedFtraceEvent() = default;
BinderTransactionReceivedFtraceEvent::BinderTransactionReceivedFtraceEvent(const BinderTransactionReceivedFtraceEvent&) = default;
BinderTransactionReceivedFtraceEvent& BinderTransactionReceivedFtraceEvent::operator=(const BinderTransactionReceivedFtraceEvent&) = default;
BinderTransactionReceivedFtraceEvent::BinderTransactionReceivedFtraceEvent(BinderTransactionReceivedFtraceEvent&&) noexcept = default;
BinderTransactionReceivedFtraceEvent& BinderTransactionReceivedFtraceEvent::operator=(BinderTransactionReceivedFtraceEvent&&) = default;

bool BinderTransactionReceivedFtraceEvent::operator==(const BinderTransactionReceivedFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && debug_id_ == other.debug_id_;
}

bool BinderTransactionReceivedFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* debug_id */:
        field.get(&debug_id_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderTransactionReceivedFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderTransactionReceivedFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderTransactionReceivedFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: debug_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, debug_id_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


BinderTransactionFtraceEvent::BinderTransactionFtraceEvent() = default;
BinderTransactionFtraceEvent::~BinderTransactionFtraceEvent() = default;
BinderTransactionFtraceEvent::BinderTransactionFtraceEvent(const BinderTransactionFtraceEvent&) = default;
BinderTransactionFtraceEvent& BinderTransactionFtraceEvent::operator=(const BinderTransactionFtraceEvent&) = default;
BinderTransactionFtraceEvent::BinderTransactionFtraceEvent(BinderTransactionFtraceEvent&&) noexcept = default;
BinderTransactionFtraceEvent& BinderTransactionFtraceEvent::operator=(BinderTransactionFtraceEvent&&) = default;

bool BinderTransactionFtraceEvent::operator==(const BinderTransactionFtraceEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && debug_id_ == other.debug_id_
   && target_node_ == other.target_node_
   && to_proc_ == other.to_proc_
   && to_thread_ == other.to_thread_
   && reply_ == other.reply_
   && code_ == other.code_
   && flags_ == other.flags_;
}

bool BinderTransactionFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* debug_id */:
        field.get(&debug_id_);
        break;
      case 2 /* target_node */:
        field.get(&target_node_);
        break;
      case 3 /* to_proc */:
        field.get(&to_proc_);
        break;
      case 4 /* to_thread */:
        field.get(&to_thread_);
        break;
      case 5 /* reply */:
        field.get(&reply_);
        break;
      case 6 /* code */:
        field.get(&code_);
        break;
      case 7 /* flags */:
        field.get(&flags_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BinderTransactionFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BinderTransactionFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BinderTransactionFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: debug_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, debug_id_, msg);
  }

  // Field 2: target_node
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, target_node_, msg);
  }

  // Field 3: to_proc
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, to_proc_, msg);
  }

  // Field 4: to_thread
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, to_thread_, msg);
  }

  // Field 5: reply
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, reply_, msg);
  }

  // Field 6: code
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, code_, msg);
  }

  // Field 7: flags
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, flags_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
