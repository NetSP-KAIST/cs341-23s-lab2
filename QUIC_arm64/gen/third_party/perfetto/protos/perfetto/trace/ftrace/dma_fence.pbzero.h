// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DMA_FENCE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DMA_FENCE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class DmaFenceWaitEndFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DmaFenceWaitEndFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DmaFenceWaitEndFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DmaFenceWaitEndFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_context() const { return at<1>().valid(); }
  uint32_t context() const { return at<1>().as_uint32(); }
  bool has_driver() const { return at<2>().valid(); }
  ::protozero::ConstChars driver() const { return at<2>().as_string(); }
  bool has_seqno() const { return at<3>().valid(); }
  uint32_t seqno() const { return at<3>().as_uint32(); }
  bool has_timeline() const { return at<4>().valid(); }
  ::protozero::ConstChars timeline() const { return at<4>().as_string(); }
};

class DmaFenceWaitEndFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = DmaFenceWaitEndFtraceEvent_Decoder;
  enum : int32_t {
    kContextFieldNumber = 1,
    kDriverFieldNumber = 2,
    kSeqnoFieldNumber = 3,
    kTimelineFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DmaFenceWaitEndFtraceEvent"; }


  using FieldMetadata_Context =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceWaitEndFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Context kContext() { return {}; }
  void set_context(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Context::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Driver =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceWaitEndFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Driver kDriver() { return {}; }
  void set_driver(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Driver::kFieldId, data, size);
  }
  void set_driver(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Driver::kFieldId, chars.data, chars.size);
  }
  void set_driver(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Driver::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Seqno =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceWaitEndFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Seqno kSeqno() { return {}; }
  void set_seqno(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Seqno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timeline =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceWaitEndFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Timeline kTimeline() { return {}; }
  void set_timeline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, data, size);
  }
  void set_timeline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, chars.data, chars.size);
  }
  void set_timeline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Timeline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class DmaFenceWaitStartFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DmaFenceWaitStartFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DmaFenceWaitStartFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DmaFenceWaitStartFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_context() const { return at<1>().valid(); }
  uint32_t context() const { return at<1>().as_uint32(); }
  bool has_driver() const { return at<2>().valid(); }
  ::protozero::ConstChars driver() const { return at<2>().as_string(); }
  bool has_seqno() const { return at<3>().valid(); }
  uint32_t seqno() const { return at<3>().as_uint32(); }
  bool has_timeline() const { return at<4>().valid(); }
  ::protozero::ConstChars timeline() const { return at<4>().as_string(); }
};

class DmaFenceWaitStartFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = DmaFenceWaitStartFtraceEvent_Decoder;
  enum : int32_t {
    kContextFieldNumber = 1,
    kDriverFieldNumber = 2,
    kSeqnoFieldNumber = 3,
    kTimelineFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DmaFenceWaitStartFtraceEvent"; }


  using FieldMetadata_Context =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceWaitStartFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Context kContext() { return {}; }
  void set_context(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Context::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Driver =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceWaitStartFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Driver kDriver() { return {}; }
  void set_driver(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Driver::kFieldId, data, size);
  }
  void set_driver(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Driver::kFieldId, chars.data, chars.size);
  }
  void set_driver(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Driver::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Seqno =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceWaitStartFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Seqno kSeqno() { return {}; }
  void set_seqno(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Seqno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timeline =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceWaitStartFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Timeline kTimeline() { return {}; }
  void set_timeline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, data, size);
  }
  void set_timeline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, chars.data, chars.size);
  }
  void set_timeline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Timeline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class DmaFenceSignaledFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DmaFenceSignaledFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DmaFenceSignaledFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DmaFenceSignaledFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_context() const { return at<1>().valid(); }
  uint32_t context() const { return at<1>().as_uint32(); }
  bool has_driver() const { return at<2>().valid(); }
  ::protozero::ConstChars driver() const { return at<2>().as_string(); }
  bool has_seqno() const { return at<3>().valid(); }
  uint32_t seqno() const { return at<3>().as_uint32(); }
  bool has_timeline() const { return at<4>().valid(); }
  ::protozero::ConstChars timeline() const { return at<4>().as_string(); }
};

class DmaFenceSignaledFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = DmaFenceSignaledFtraceEvent_Decoder;
  enum : int32_t {
    kContextFieldNumber = 1,
    kDriverFieldNumber = 2,
    kSeqnoFieldNumber = 3,
    kTimelineFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DmaFenceSignaledFtraceEvent"; }


  using FieldMetadata_Context =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceSignaledFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Context kContext() { return {}; }
  void set_context(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Context::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Driver =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceSignaledFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Driver kDriver() { return {}; }
  void set_driver(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Driver::kFieldId, data, size);
  }
  void set_driver(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Driver::kFieldId, chars.data, chars.size);
  }
  void set_driver(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Driver::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Seqno =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceSignaledFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Seqno kSeqno() { return {}; }
  void set_seqno(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Seqno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timeline =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceSignaledFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Timeline kTimeline() { return {}; }
  void set_timeline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, data, size);
  }
  void set_timeline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, chars.data, chars.size);
  }
  void set_timeline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Timeline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class DmaFenceEmitFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DmaFenceEmitFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DmaFenceEmitFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DmaFenceEmitFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_context() const { return at<1>().valid(); }
  uint32_t context() const { return at<1>().as_uint32(); }
  bool has_driver() const { return at<2>().valid(); }
  ::protozero::ConstChars driver() const { return at<2>().as_string(); }
  bool has_seqno() const { return at<3>().valid(); }
  uint32_t seqno() const { return at<3>().as_uint32(); }
  bool has_timeline() const { return at<4>().valid(); }
  ::protozero::ConstChars timeline() const { return at<4>().as_string(); }
};

class DmaFenceEmitFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = DmaFenceEmitFtraceEvent_Decoder;
  enum : int32_t {
    kContextFieldNumber = 1,
    kDriverFieldNumber = 2,
    kSeqnoFieldNumber = 3,
    kTimelineFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DmaFenceEmitFtraceEvent"; }


  using FieldMetadata_Context =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceEmitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Context kContext() { return {}; }
  void set_context(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Context::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Driver =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceEmitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Driver kDriver() { return {}; }
  void set_driver(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Driver::kFieldId, data, size);
  }
  void set_driver(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Driver::kFieldId, chars.data, chars.size);
  }
  void set_driver(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Driver::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Seqno =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceEmitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Seqno kSeqno() { return {}; }
  void set_seqno(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Seqno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timeline =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceEmitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Timeline kTimeline() { return {}; }
  void set_timeline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, data, size);
  }
  void set_timeline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, chars.data, chars.size);
  }
  void set_timeline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Timeline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class DmaFenceInitFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DmaFenceInitFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DmaFenceInitFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DmaFenceInitFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_context() const { return at<1>().valid(); }
  uint32_t context() const { return at<1>().as_uint32(); }
  bool has_driver() const { return at<2>().valid(); }
  ::protozero::ConstChars driver() const { return at<2>().as_string(); }
  bool has_seqno() const { return at<3>().valid(); }
  uint32_t seqno() const { return at<3>().as_uint32(); }
  bool has_timeline() const { return at<4>().valid(); }
  ::protozero::ConstChars timeline() const { return at<4>().as_string(); }
};

class DmaFenceInitFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = DmaFenceInitFtraceEvent_Decoder;
  enum : int32_t {
    kContextFieldNumber = 1,
    kDriverFieldNumber = 2,
    kSeqnoFieldNumber = 3,
    kTimelineFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DmaFenceInitFtraceEvent"; }


  using FieldMetadata_Context =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceInitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Context kContext() { return {}; }
  void set_context(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Context::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Driver =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceInitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Driver kDriver() { return {}; }
  void set_driver(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Driver::kFieldId, data, size);
  }
  void set_driver(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Driver::kFieldId, chars.data, chars.size);
  }
  void set_driver(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Driver::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Seqno =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      DmaFenceInitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Seqno kSeqno() { return {}; }
  void set_seqno(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Seqno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timeline =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DmaFenceInitFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Timeline kTimeline() { return {}; }
  void set_timeline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, data, size);
  }
  void set_timeline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Timeline::kFieldId, chars.data, chars.size);
  }
  void set_timeline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Timeline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.