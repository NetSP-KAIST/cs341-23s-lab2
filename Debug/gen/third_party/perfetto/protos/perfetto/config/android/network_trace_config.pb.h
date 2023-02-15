// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/network_trace_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class NetworkPacketTraceConfig;
struct NetworkPacketTraceConfigDefaultTypeInternal;
extern NetworkPacketTraceConfigDefaultTypeInternal _NetworkPacketTraceConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::NetworkPacketTraceConfig* Arena::CreateMaybeMessage<::perfetto::protos::NetworkPacketTraceConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class NetworkPacketTraceConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.NetworkPacketTraceConfig) */ {
 public:
  inline NetworkPacketTraceConfig() : NetworkPacketTraceConfig(nullptr) {}
  ~NetworkPacketTraceConfig() override;
  explicit PROTOBUF_CONSTEXPR NetworkPacketTraceConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetworkPacketTraceConfig(const NetworkPacketTraceConfig& from);
  NetworkPacketTraceConfig(NetworkPacketTraceConfig&& from) noexcept
    : NetworkPacketTraceConfig() {
    *this = ::std::move(from);
  }

  inline NetworkPacketTraceConfig& operator=(const NetworkPacketTraceConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetworkPacketTraceConfig& operator=(NetworkPacketTraceConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const NetworkPacketTraceConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetworkPacketTraceConfig* internal_default_instance() {
    return reinterpret_cast<const NetworkPacketTraceConfig*>(
               &_NetworkPacketTraceConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetworkPacketTraceConfig& a, NetworkPacketTraceConfig& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(NetworkPacketTraceConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetworkPacketTraceConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetworkPacketTraceConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetworkPacketTraceConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const NetworkPacketTraceConfig& from);
  void MergeFrom(const NetworkPacketTraceConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NetworkPacketTraceConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.NetworkPacketTraceConfig";
  }
  protected:
  explicit NetworkPacketTraceConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPollMsFieldNumber = 1,
  };
  // optional uint32 poll_ms = 1;
  bool has_poll_ms() const;
  private:
  bool _internal_has_poll_ms() const;
  public:
  void clear_poll_ms();
  uint32_t poll_ms() const;
  void set_poll_ms(uint32_t value);
  private:
  uint32_t _internal_poll_ms() const;
  void _internal_set_poll_ms(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.NetworkPacketTraceConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t poll_ms_;
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetworkPacketTraceConfig

// optional uint32 poll_ms = 1;
inline bool NetworkPacketTraceConfig::_internal_has_poll_ms() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetworkPacketTraceConfig::has_poll_ms() const {
  return _internal_has_poll_ms();
}
inline void NetworkPacketTraceConfig::clear_poll_ms() {
  poll_ms_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t NetworkPacketTraceConfig::_internal_poll_ms() const {
  return poll_ms_;
}
inline uint32_t NetworkPacketTraceConfig::poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.NetworkPacketTraceConfig.poll_ms)
  return _internal_poll_ms();
}
inline void NetworkPacketTraceConfig::_internal_set_poll_ms(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  poll_ms_ = value;
}
inline void NetworkPacketTraceConfig::set_poll_ms(uint32_t value) {
  _internal_set_poll_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.NetworkPacketTraceConfig.poll_ms)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fnetwork_5ftrace_5fconfig_2eproto
