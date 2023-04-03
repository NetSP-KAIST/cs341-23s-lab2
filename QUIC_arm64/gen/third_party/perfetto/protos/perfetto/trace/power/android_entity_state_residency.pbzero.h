// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_ANDROID_ENTITY_STATE_RESIDENCY_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_ANDROID_ENTITY_STATE_RESIDENCY_PROTO_H_

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

class EntityStateResidency_PowerEntityState;
class EntityStateResidency_StateResidency;

class EntityStateResidency_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  EntityStateResidency_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit EntityStateResidency_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit EntityStateResidency_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_power_entity_state() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> power_entity_state() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_residency() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> residency() const { return GetRepeated<::protozero::ConstBytes>(2); }
};

class EntityStateResidency : public ::protozero::Message {
 public:
  using Decoder = EntityStateResidency_Decoder;
  enum : int32_t {
    kPowerEntityStateFieldNumber = 1,
    kResidencyFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.EntityStateResidency"; }

  using PowerEntityState = ::perfetto::protos::pbzero::EntityStateResidency_PowerEntityState;
  using StateResidency = ::perfetto::protos::pbzero::EntityStateResidency_StateResidency;

  using FieldMetadata_PowerEntityState =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      EntityStateResidency_PowerEntityState,
      EntityStateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_PowerEntityState kPowerEntityState() { return {}; }
  template <typename T = EntityStateResidency_PowerEntityState> T* add_power_entity_state() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_Residency =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      EntityStateResidency_StateResidency,
      EntityStateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Residency kResidency() { return {}; }
  template <typename T = EntityStateResidency_StateResidency> T* add_residency() {
    return BeginNestedMessage<T>(2);
  }

};

class EntityStateResidency_StateResidency_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  EntityStateResidency_StateResidency_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit EntityStateResidency_StateResidency_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit EntityStateResidency_StateResidency_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_entity_index() const { return at<1>().valid(); }
  int32_t entity_index() const { return at<1>().as_int32(); }
  bool has_state_index() const { return at<2>().valid(); }
  int32_t state_index() const { return at<2>().as_int32(); }
  bool has_total_time_in_state_ms() const { return at<3>().valid(); }
  uint64_t total_time_in_state_ms() const { return at<3>().as_uint64(); }
  bool has_total_state_entry_count() const { return at<4>().valid(); }
  uint64_t total_state_entry_count() const { return at<4>().as_uint64(); }
  bool has_last_entry_timestamp_ms() const { return at<5>().valid(); }
  uint64_t last_entry_timestamp_ms() const { return at<5>().as_uint64(); }
};

class EntityStateResidency_StateResidency : public ::protozero::Message {
 public:
  using Decoder = EntityStateResidency_StateResidency_Decoder;
  enum : int32_t {
    kEntityIndexFieldNumber = 1,
    kStateIndexFieldNumber = 2,
    kTotalTimeInStateMsFieldNumber = 3,
    kTotalStateEntryCountFieldNumber = 4,
    kLastEntryTimestampMsFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.EntityStateResidency.StateResidency"; }


  using FieldMetadata_EntityIndex =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      EntityStateResidency_StateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_EntityIndex kEntityIndex() { return {}; }
  void set_entity_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_EntityIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StateIndex =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      EntityStateResidency_StateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_StateIndex kStateIndex() { return {}; }
  void set_state_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_StateIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TotalTimeInStateMs =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      EntityStateResidency_StateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TotalTimeInStateMs kTotalTimeInStateMs() { return {}; }
  void set_total_time_in_state_ms(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TotalTimeInStateMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TotalStateEntryCount =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      EntityStateResidency_StateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TotalStateEntryCount kTotalStateEntryCount() { return {}; }
  void set_total_state_entry_count(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TotalStateEntryCount::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LastEntryTimestampMs =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      EntityStateResidency_StateResidency>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_LastEntryTimestampMs kLastEntryTimestampMs() { return {}; }
  void set_last_entry_timestamp_ms(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LastEntryTimestampMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class EntityStateResidency_PowerEntityState_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  EntityStateResidency_PowerEntityState_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit EntityStateResidency_PowerEntityState_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit EntityStateResidency_PowerEntityState_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_entity_index() const { return at<1>().valid(); }
  int32_t entity_index() const { return at<1>().as_int32(); }
  bool has_state_index() const { return at<2>().valid(); }
  int32_t state_index() const { return at<2>().as_int32(); }
  bool has_entity_name() const { return at<3>().valid(); }
  ::protozero::ConstChars entity_name() const { return at<3>().as_string(); }
  bool has_state_name() const { return at<4>().valid(); }
  ::protozero::ConstChars state_name() const { return at<4>().as_string(); }
};

class EntityStateResidency_PowerEntityState : public ::protozero::Message {
 public:
  using Decoder = EntityStateResidency_PowerEntityState_Decoder;
  enum : int32_t {
    kEntityIndexFieldNumber = 1,
    kStateIndexFieldNumber = 2,
    kEntityNameFieldNumber = 3,
    kStateNameFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.EntityStateResidency.PowerEntityState"; }


  using FieldMetadata_EntityIndex =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      EntityStateResidency_PowerEntityState>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_EntityIndex kEntityIndex() { return {}; }
  void set_entity_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_EntityIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StateIndex =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      EntityStateResidency_PowerEntityState>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_StateIndex kStateIndex() { return {}; }
  void set_state_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_StateIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_EntityName =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      EntityStateResidency_PowerEntityState>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_EntityName kEntityName() { return {}; }
  void set_entity_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_EntityName::kFieldId, data, size);
  }
  void set_entity_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_EntityName::kFieldId, chars.data, chars.size);
  }
  void set_entity_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_EntityName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StateName =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      EntityStateResidency_PowerEntityState>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_StateName kStateName() { return {}; }
  void set_state_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_StateName::kFieldId, data, size);
  }
  void set_state_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_StateName::kFieldId, chars.data, chars.size);
  }
  void set_state_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_StateName::kFieldId;
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
