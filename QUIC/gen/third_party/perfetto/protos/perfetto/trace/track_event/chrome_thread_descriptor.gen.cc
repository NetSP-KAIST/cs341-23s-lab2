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
#include "protos/perfetto/trace/track_event/chrome_thread_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeThreadDescriptor::ChromeThreadDescriptor() = default;
ChromeThreadDescriptor::~ChromeThreadDescriptor() = default;
ChromeThreadDescriptor::ChromeThreadDescriptor(const ChromeThreadDescriptor&) = default;
ChromeThreadDescriptor& ChromeThreadDescriptor::operator=(const ChromeThreadDescriptor&) = default;
ChromeThreadDescriptor::ChromeThreadDescriptor(ChromeThreadDescriptor&&) noexcept = default;
ChromeThreadDescriptor& ChromeThreadDescriptor::operator=(ChromeThreadDescriptor&&) = default;

bool ChromeThreadDescriptor::operator==(const ChromeThreadDescriptor& other) const {
  return unknown_fields_ == other.unknown_fields_
   && thread_type_ == other.thread_type_
   && legacy_sort_index_ == other.legacy_sort_index_;
}

bool ChromeThreadDescriptor::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* thread_type */:
        field.get(&thread_type_);
        break;
      case 2 /* legacy_sort_index */:
        field.get(&legacy_sort_index_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeThreadDescriptor::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeThreadDescriptor::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeThreadDescriptor::Serialize(::protozero::Message* msg) const {
  // Field 1: thread_type
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, thread_type_, msg);
  }

  // Field 2: legacy_sort_index
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, legacy_sort_index_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
