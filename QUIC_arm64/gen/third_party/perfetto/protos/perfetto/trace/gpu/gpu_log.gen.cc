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
#include "protos/perfetto/trace/gpu/gpu_log.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

GpuLog::GpuLog() = default;
GpuLog::~GpuLog() = default;
GpuLog::GpuLog(const GpuLog&) = default;
GpuLog& GpuLog::operator=(const GpuLog&) = default;
GpuLog::GpuLog(GpuLog&&) noexcept = default;
GpuLog& GpuLog::operator=(GpuLog&&) = default;

bool GpuLog::operator==(const GpuLog& other) const {
  return unknown_fields_ == other.unknown_fields_
   && severity_ == other.severity_
   && tag_ == other.tag_
   && log_message_ == other.log_message_;
}

bool GpuLog::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* severity */:
        field.get(&severity_);
        break;
      case 2 /* tag */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tag_);
        break;
      case 3 /* log_message */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &log_message_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string GpuLog::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> GpuLog::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void GpuLog::Serialize(::protozero::Message* msg) const {
  // Field 1: severity
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, severity_, msg);
  }

  // Field 2: tag
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, tag_, msg);
  }

  // Field 3: log_message
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, log_message_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
