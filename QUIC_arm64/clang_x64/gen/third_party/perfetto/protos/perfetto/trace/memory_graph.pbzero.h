// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_MEMORY_GRAPH_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_MEMORY_GRAPH_PROTO_H_

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

class MemoryTrackerSnapshot_ProcessSnapshot;
class MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge;
class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode;
class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry;
namespace perfetto_pbzero_enum_MemoryTrackerSnapshot {
enum LevelOfDetail : int32_t;
}  // namespace perfetto_pbzero_enum_MemoryTrackerSnapshot
using MemoryTrackerSnapshot_LevelOfDetail = perfetto_pbzero_enum_MemoryTrackerSnapshot::LevelOfDetail;
namespace perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry {
enum Units : int32_t;
}  // namespace perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry
using MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units = perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry::Units;

namespace perfetto_pbzero_enum_MemoryTrackerSnapshot {
enum LevelOfDetail : int32_t {
  DETAIL_FULL = 0,
  DETAIL_LIGHT = 1,
  DETAIL_BACKGROUND = 2,
};
} // namespace perfetto_pbzero_enum_MemoryTrackerSnapshot
using MemoryTrackerSnapshot_LevelOfDetail = perfetto_pbzero_enum_MemoryTrackerSnapshot::LevelOfDetail;


constexpr MemoryTrackerSnapshot_LevelOfDetail MemoryTrackerSnapshot_LevelOfDetail_MIN = MemoryTrackerSnapshot_LevelOfDetail::DETAIL_FULL;
constexpr MemoryTrackerSnapshot_LevelOfDetail MemoryTrackerSnapshot_LevelOfDetail_MAX = MemoryTrackerSnapshot_LevelOfDetail::DETAIL_BACKGROUND;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* MemoryTrackerSnapshot_LevelOfDetail_Name(::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail value) {
  switch (value) {
  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail::DETAIL_FULL:
    return "DETAIL_FULL";

  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail::DETAIL_LIGHT:
    return "DETAIL_LIGHT";

  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail::DETAIL_BACKGROUND:
    return "DETAIL_BACKGROUND";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry {
enum Units : int32_t {
  UNSPECIFIED = 0,
  BYTES = 1,
  COUNT = 2,
};
} // namespace perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry
using MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units = perfetto_pbzero_enum_MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry::Units;


constexpr MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units_MIN = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units::UNSPECIFIED;
constexpr MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units_MAX = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units::COUNT;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units_Name(::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units value) {
  switch (value) {
  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units::UNSPECIFIED:
    return "UNSPECIFIED";

  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units::BYTES:
    return "BYTES";

  case ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units::COUNT:
    return "COUNT";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class MemoryTrackerSnapshot_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  MemoryTrackerSnapshot_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MemoryTrackerSnapshot_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MemoryTrackerSnapshot_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_global_dump_id() const { return at<1>().valid(); }
  uint64_t global_dump_id() const { return at<1>().as_uint64(); }
  bool has_level_of_detail() const { return at<2>().valid(); }
  int32_t level_of_detail() const { return at<2>().as_int32(); }
  bool has_process_memory_dumps() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> process_memory_dumps() const { return GetRepeated<::protozero::ConstBytes>(3); }
};

class MemoryTrackerSnapshot : public ::protozero::Message {
 public:
  using Decoder = MemoryTrackerSnapshot_Decoder;
  enum : int32_t {
    kGlobalDumpIdFieldNumber = 1,
    kLevelOfDetailFieldNumber = 2,
    kProcessMemoryDumpsFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MemoryTrackerSnapshot"; }

  using ProcessSnapshot = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot;

  using LevelOfDetail = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail;
  static inline const char* LevelOfDetail_Name(LevelOfDetail value) {
    return ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail_Name(value);
  }
  static const LevelOfDetail DETAIL_FULL = LevelOfDetail::DETAIL_FULL;
  static const LevelOfDetail DETAIL_LIGHT = LevelOfDetail::DETAIL_LIGHT;
  static const LevelOfDetail DETAIL_BACKGROUND = LevelOfDetail::DETAIL_BACKGROUND;

  using FieldMetadata_GlobalDumpId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_GlobalDumpId kGlobalDumpId() { return {}; }
  void set_global_dump_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_GlobalDumpId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LevelOfDetail =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail,
      MemoryTrackerSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_LevelOfDetail kLevelOfDetail() { return {}; }
  void set_level_of_detail(::perfetto::protos::pbzero::MemoryTrackerSnapshot_LevelOfDetail value) {
    static constexpr uint32_t field_id = FieldMetadata_LevelOfDetail::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProcessMemoryDumps =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      MemoryTrackerSnapshot_ProcessSnapshot,
      MemoryTrackerSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ProcessMemoryDumps kProcessMemoryDumps() { return {}; }
  template <typename T = MemoryTrackerSnapshot_ProcessSnapshot> T* add_process_memory_dumps() {
    return BeginNestedMessage<T>(3);
  }

};

class MemoryTrackerSnapshot_ProcessSnapshot_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  MemoryTrackerSnapshot_ProcessSnapshot_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  int32_t pid() const { return at<1>().as_int32(); }
  bool has_allocator_dumps() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> allocator_dumps() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_memory_edges() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> memory_edges() const { return GetRepeated<::protozero::ConstBytes>(3); }
};

class MemoryTrackerSnapshot_ProcessSnapshot : public ::protozero::Message {
 public:
  using Decoder = MemoryTrackerSnapshot_ProcessSnapshot_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kAllocatorDumpsFieldNumber = 2,
    kMemoryEdgesFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MemoryTrackerSnapshot.ProcessSnapshot"; }

  using MemoryNode = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode;
  using MemoryEdge = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge;

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      MemoryTrackerSnapshot_ProcessSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Pid kPid() { return {}; }
  void set_pid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AllocatorDumps =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode,
      MemoryTrackerSnapshot_ProcessSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AllocatorDumps kAllocatorDumps() { return {}; }
  template <typename T = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode> T* add_allocator_dumps() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_MemoryEdges =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge,
      MemoryTrackerSnapshot_ProcessSnapshot>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_MemoryEdges kMemoryEdges() { return {}; }
  template <typename T = MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge> T* add_memory_edges() {
    return BeginNestedMessage<T>(3);
  }

};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_source_id() const { return at<1>().valid(); }
  uint64_t source_id() const { return at<1>().as_uint64(); }
  bool has_target_id() const { return at<2>().valid(); }
  uint64_t target_id() const { return at<2>().as_uint64(); }
  bool has_importance() const { return at<3>().valid(); }
  uint32_t importance() const { return at<3>().as_uint32(); }
  bool has_overridable() const { return at<4>().valid(); }
  bool overridable() const { return at<4>().as_bool(); }
};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge : public ::protozero::Message {
 public:
  using Decoder = MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge_Decoder;
  enum : int32_t {
    kSourceIdFieldNumber = 1,
    kTargetIdFieldNumber = 2,
    kImportanceFieldNumber = 3,
    kOverridableFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MemoryTrackerSnapshot.ProcessSnapshot.MemoryEdge"; }


  using FieldMetadata_SourceId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_SourceId kSourceId() { return {}; }
  void set_source_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SourceId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TargetId =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TargetId kTargetId() { return {}; }
  void set_target_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Importance =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Importance kImportance() { return {}; }
  void set_importance(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Importance::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Overridable =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryEdge>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Overridable kOverridable() { return {}; }
  void set_overridable(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_Overridable::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  uint64_t id() const { return at<1>().as_uint64(); }
  bool has_absolute_name() const { return at<2>().valid(); }
  ::protozero::ConstChars absolute_name() const { return at<2>().as_string(); }
  bool has_weak() const { return at<3>().valid(); }
  bool weak() const { return at<3>().as_bool(); }
  bool has_size_bytes() const { return at<4>().valid(); }
  uint64_t size_bytes() const { return at<4>().as_uint64(); }
  bool has_entries() const { return at<5>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> entries() const { return GetRepeated<::protozero::ConstBytes>(5); }
};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode : public ::protozero::Message {
 public:
  using Decoder = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kAbsoluteNameFieldNumber = 2,
    kWeakFieldNumber = 3,
    kSizeBytesFieldNumber = 4,
    kEntriesFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MemoryTrackerSnapshot.ProcessSnapshot.MemoryNode"; }

  using MemoryNodeEntry = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry;

  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Id kId() { return {}; }
  void set_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AbsoluteName =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AbsoluteName kAbsoluteName() { return {}; }
  void set_absolute_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_AbsoluteName::kFieldId, data, size);
  }
  void set_absolute_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_AbsoluteName::kFieldId, chars.data, chars.size);
  }
  void set_absolute_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_AbsoluteName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Weak =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Weak kWeak() { return {}; }
  void set_weak(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_Weak::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SizeBytes =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_SizeBytes kSizeBytes() { return {}; }
  void set_size_bytes(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SizeBytes::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Entries =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Entries kEntries() { return {}; }
  template <typename T = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry> T* add_entries() {
    return BeginNestedMessage<T>(5);
  }

};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_units() const { return at<2>().valid(); }
  int32_t units() const { return at<2>().as_int32(); }
  bool has_value_uint64() const { return at<3>().valid(); }
  uint64_t value_uint64() const { return at<3>().as_uint64(); }
  bool has_value_string() const { return at<4>().valid(); }
  ::protozero::ConstChars value_string() const { return at<4>().as_string(); }
};

class MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry : public ::protozero::Message {
 public:
  using Decoder = MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kUnitsFieldNumber = 2,
    kValueUint64FieldNumber = 3,
    kValueStringFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MemoryTrackerSnapshot.ProcessSnapshot.MemoryNode.MemoryNodeEntry"; }


  using Units = ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units;
  static inline const char* Units_Name(Units value) {
    return ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units_Name(value);
  }
  static const Units UNSPECIFIED = Units::UNSPECIFIED;
  static const Units BYTES = Units::BYTES;
  static const Units COUNT = Units::COUNT;

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Name kName() { return {}; }
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Name::kFieldId, chars.data, chars.size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Units =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Units kUnits() { return {}; }
  void set_units(::perfetto::protos::pbzero::MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry_Units value) {
    static constexpr uint32_t field_id = FieldMetadata_Units::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ValueUint64 =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ValueUint64 kValueUint64() { return {}; }
  void set_value_uint64(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ValueUint64::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ValueString =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      MemoryTrackerSnapshot_ProcessSnapshot_MemoryNode_MemoryNodeEntry>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ValueString kValueString() { return {}; }
  void set_value_string(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ValueString::kFieldId, data, size);
  }
  void set_value_string(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ValueString::kFieldId, chars.data, chars.size);
  }
  void set_value_string(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ValueString::kFieldId;
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