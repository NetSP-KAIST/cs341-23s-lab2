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
#include "protos/perfetto/trace/track_event/counter_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

CounterDescriptor::CounterDescriptor() = default;
CounterDescriptor::~CounterDescriptor() = default;
CounterDescriptor::CounterDescriptor(const CounterDescriptor&) = default;
CounterDescriptor& CounterDescriptor::operator=(const CounterDescriptor&) = default;
CounterDescriptor::CounterDescriptor(CounterDescriptor&&) noexcept = default;
CounterDescriptor& CounterDescriptor::operator=(CounterDescriptor&&) = default;

bool CounterDescriptor::operator==(const CounterDescriptor& other) const {
  return unknown_fields_ == other.unknown_fields_
   && type_ == other.type_
   && categories_ == other.categories_
   && unit_ == other.unit_
   && unit_name_ == other.unit_name_
   && unit_multiplier_ == other.unit_multiplier_
   && is_incremental_ == other.is_incremental_;
}

bool CounterDescriptor::ParseFromArray(const void* raw, size_t size) {
  categories_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* type */:
        field.get(&type_);
        break;
      case 2 /* categories */:
        categories_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &categories_.back());
        break;
      case 3 /* unit */:
        field.get(&unit_);
        break;
      case 6 /* unit_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &unit_name_);
        break;
      case 4 /* unit_multiplier */:
        field.get(&unit_multiplier_);
        break;
      case 5 /* is_incremental */:
        field.get(&is_incremental_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string CounterDescriptor::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> CounterDescriptor::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void CounterDescriptor::Serialize(::protozero::Message* msg) const {
  // Field 1: type
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, type_, msg);
  }

  // Field 2: categories
  for (auto& it : categories_) {
    ::protozero::internal::gen_helpers::SerializeString(2, it, msg);
  }

  // Field 3: unit
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, unit_, msg);
  }

  // Field 6: unit_name
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeString(6, unit_name_, msg);
  }

  // Field 4: unit_multiplier
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, unit_multiplier_, msg);
  }

  // Field 5: is_incremental
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(5, is_incremental_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
