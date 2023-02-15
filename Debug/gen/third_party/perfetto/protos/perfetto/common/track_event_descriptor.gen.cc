#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/common/track_event_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

TrackEventDescriptor::TrackEventDescriptor() = default;
TrackEventDescriptor::~TrackEventDescriptor() = default;
TrackEventDescriptor::TrackEventDescriptor(const TrackEventDescriptor&) = default;
TrackEventDescriptor& TrackEventDescriptor::operator=(const TrackEventDescriptor&) = default;
TrackEventDescriptor::TrackEventDescriptor(TrackEventDescriptor&&) noexcept = default;
TrackEventDescriptor& TrackEventDescriptor::operator=(TrackEventDescriptor&&) = default;

bool TrackEventDescriptor::operator==(const TrackEventDescriptor& other) const {
  return unknown_fields_ == other.unknown_fields_
   && available_categories_ == other.available_categories_;
}

int TrackEventDescriptor::available_categories_size() const { return static_cast<int>(available_categories_.size()); }
void TrackEventDescriptor::clear_available_categories() { available_categories_.clear(); }
TrackEventCategory* TrackEventDescriptor::add_available_categories() { available_categories_.emplace_back(); return &available_categories_.back(); }
bool TrackEventDescriptor::ParseFromArray(const void* raw, size_t size) {
  available_categories_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* available_categories */:
        available_categories_.emplace_back();
        available_categories_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TrackEventDescriptor::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TrackEventDescriptor::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TrackEventDescriptor::Serialize(::protozero::Message* msg) const {
  // Field 1: available_categories
  for (auto& it : available_categories_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


TrackEventCategory::TrackEventCategory() = default;
TrackEventCategory::~TrackEventCategory() = default;
TrackEventCategory::TrackEventCategory(const TrackEventCategory&) = default;
TrackEventCategory& TrackEventCategory::operator=(const TrackEventCategory&) = default;
TrackEventCategory::TrackEventCategory(TrackEventCategory&&) noexcept = default;
TrackEventCategory& TrackEventCategory::operator=(TrackEventCategory&&) = default;

bool TrackEventCategory::operator==(const TrackEventCategory& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && description_ == other.description_
   && tags_ == other.tags_;
}

bool TrackEventCategory::ParseFromArray(const void* raw, size_t size) {
  tags_.clear();
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
      case 2 /* description */:
        field.get(&description_);
        break;
      case 3 /* tags */:
        tags_.emplace_back();
        field.get(&tags_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TrackEventCategory::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TrackEventCategory::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TrackEventCategory::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    msg->AppendString(1, name_);
  }

  // Field 2: description
  if (_has_field_[2]) {
    msg->AppendString(2, description_);
  }

  // Field 3: tags
  for (auto& it : tags_) {
    msg->AppendString(3, it);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
