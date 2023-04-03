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
#include "protos/perfetto/trace/chrome/chrome_benchmark_metadata.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeBenchmarkMetadata::ChromeBenchmarkMetadata() = default;
ChromeBenchmarkMetadata::~ChromeBenchmarkMetadata() = default;
ChromeBenchmarkMetadata::ChromeBenchmarkMetadata(const ChromeBenchmarkMetadata&) = default;
ChromeBenchmarkMetadata& ChromeBenchmarkMetadata::operator=(const ChromeBenchmarkMetadata&) = default;
ChromeBenchmarkMetadata::ChromeBenchmarkMetadata(ChromeBenchmarkMetadata&&) noexcept = default;
ChromeBenchmarkMetadata& ChromeBenchmarkMetadata::operator=(ChromeBenchmarkMetadata&&) = default;

bool ChromeBenchmarkMetadata::operator==(const ChromeBenchmarkMetadata& other) const {
  return unknown_fields_ == other.unknown_fields_
   && benchmark_start_time_us_ == other.benchmark_start_time_us_
   && story_run_time_us_ == other.story_run_time_us_
   && benchmark_name_ == other.benchmark_name_
   && benchmark_description_ == other.benchmark_description_
   && label_ == other.label_
   && story_name_ == other.story_name_
   && story_tags_ == other.story_tags_
   && story_run_index_ == other.story_run_index_
   && had_failures_ == other.had_failures_;
}

bool ChromeBenchmarkMetadata::ParseFromArray(const void* raw, size_t size) {
  story_tags_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* benchmark_start_time_us */:
        field.get(&benchmark_start_time_us_);
        break;
      case 2 /* story_run_time_us */:
        field.get(&story_run_time_us_);
        break;
      case 3 /* benchmark_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &benchmark_name_);
        break;
      case 4 /* benchmark_description */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &benchmark_description_);
        break;
      case 5 /* label */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &label_);
        break;
      case 6 /* story_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &story_name_);
        break;
      case 7 /* story_tags */:
        story_tags_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &story_tags_.back());
        break;
      case 8 /* story_run_index */:
        field.get(&story_run_index_);
        break;
      case 9 /* had_failures */:
        field.get(&had_failures_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeBenchmarkMetadata::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeBenchmarkMetadata::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeBenchmarkMetadata::Serialize(::protozero::Message* msg) const {
  // Field 1: benchmark_start_time_us
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, benchmark_start_time_us_, msg);
  }

  // Field 2: story_run_time_us
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, story_run_time_us_, msg);
  }

  // Field 3: benchmark_name
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, benchmark_name_, msg);
  }

  // Field 4: benchmark_description
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, benchmark_description_, msg);
  }

  // Field 5: label
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeString(5, label_, msg);
  }

  // Field 6: story_name
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeString(6, story_name_, msg);
  }

  // Field 7: story_tags
  for (auto& it : story_tags_) {
    ::protozero::internal::gen_helpers::SerializeString(7, it, msg);
  }

  // Field 8: story_run_index
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, story_run_index_, msg);
  }

  // Field 9: had_failures
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(9, had_failures_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif