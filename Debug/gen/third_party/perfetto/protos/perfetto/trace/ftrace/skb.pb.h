// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/skb.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class KfreeSkbFtraceEvent;
struct KfreeSkbFtraceEventDefaultTypeInternal;
extern KfreeSkbFtraceEventDefaultTypeInternal _KfreeSkbFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::KfreeSkbFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::KfreeSkbFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class KfreeSkbFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.KfreeSkbFtraceEvent) */ {
 public:
  inline KfreeSkbFtraceEvent() : KfreeSkbFtraceEvent(nullptr) {}
  ~KfreeSkbFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR KfreeSkbFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KfreeSkbFtraceEvent(const KfreeSkbFtraceEvent& from);
  KfreeSkbFtraceEvent(KfreeSkbFtraceEvent&& from) noexcept
    : KfreeSkbFtraceEvent() {
    *this = ::std::move(from);
  }

  inline KfreeSkbFtraceEvent& operator=(const KfreeSkbFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline KfreeSkbFtraceEvent& operator=(KfreeSkbFtraceEvent&& from) noexcept {
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

  static const KfreeSkbFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const KfreeSkbFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const KfreeSkbFtraceEvent*>(
               &_KfreeSkbFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KfreeSkbFtraceEvent& a, KfreeSkbFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(KfreeSkbFtraceEvent* other) {
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
  void UnsafeArenaSwap(KfreeSkbFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KfreeSkbFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KfreeSkbFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const KfreeSkbFtraceEvent& from);
  void MergeFrom(const KfreeSkbFtraceEvent& from);
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
  void InternalSwap(KfreeSkbFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.KfreeSkbFtraceEvent";
  }
  protected:
  explicit KfreeSkbFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLocationFieldNumber = 1,
    kSkbaddrFieldNumber = 3,
    kProtocolFieldNumber = 2,
  };
  // optional uint64 location = 1;
  bool has_location() const;
  private:
  bool _internal_has_location() const;
  public:
  void clear_location();
  uint64_t location() const;
  void set_location(uint64_t value);
  private:
  uint64_t _internal_location() const;
  void _internal_set_location(uint64_t value);
  public:

  // optional uint64 skbaddr = 3;
  bool has_skbaddr() const;
  private:
  bool _internal_has_skbaddr() const;
  public:
  void clear_skbaddr();
  uint64_t skbaddr() const;
  void set_skbaddr(uint64_t value);
  private:
  uint64_t _internal_skbaddr() const;
  void _internal_set_skbaddr(uint64_t value);
  public:

  // optional uint32 protocol = 2;
  bool has_protocol() const;
  private:
  bool _internal_has_protocol() const;
  public:
  void clear_protocol();
  uint32_t protocol() const;
  void set_protocol(uint32_t value);
  private:
  uint32_t _internal_protocol() const;
  void _internal_set_protocol(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.KfreeSkbFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t location_;
  uint64_t skbaddr_;
  uint32_t protocol_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KfreeSkbFtraceEvent

// optional uint64 location = 1;
inline bool KfreeSkbFtraceEvent::_internal_has_location() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool KfreeSkbFtraceEvent::has_location() const {
  return _internal_has_location();
}
inline void KfreeSkbFtraceEvent::clear_location() {
  location_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t KfreeSkbFtraceEvent::_internal_location() const {
  return location_;
}
inline uint64_t KfreeSkbFtraceEvent::location() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.KfreeSkbFtraceEvent.location)
  return _internal_location();
}
inline void KfreeSkbFtraceEvent::_internal_set_location(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  location_ = value;
}
inline void KfreeSkbFtraceEvent::set_location(uint64_t value) {
  _internal_set_location(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.KfreeSkbFtraceEvent.location)
}

// optional uint32 protocol = 2;
inline bool KfreeSkbFtraceEvent::_internal_has_protocol() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool KfreeSkbFtraceEvent::has_protocol() const {
  return _internal_has_protocol();
}
inline void KfreeSkbFtraceEvent::clear_protocol() {
  protocol_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t KfreeSkbFtraceEvent::_internal_protocol() const {
  return protocol_;
}
inline uint32_t KfreeSkbFtraceEvent::protocol() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.KfreeSkbFtraceEvent.protocol)
  return _internal_protocol();
}
inline void KfreeSkbFtraceEvent::_internal_set_protocol(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  protocol_ = value;
}
inline void KfreeSkbFtraceEvent::set_protocol(uint32_t value) {
  _internal_set_protocol(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.KfreeSkbFtraceEvent.protocol)
}

// optional uint64 skbaddr = 3;
inline bool KfreeSkbFtraceEvent::_internal_has_skbaddr() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool KfreeSkbFtraceEvent::has_skbaddr() const {
  return _internal_has_skbaddr();
}
inline void KfreeSkbFtraceEvent::clear_skbaddr() {
  skbaddr_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000002u;
}
inline uint64_t KfreeSkbFtraceEvent::_internal_skbaddr() const {
  return skbaddr_;
}
inline uint64_t KfreeSkbFtraceEvent::skbaddr() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.KfreeSkbFtraceEvent.skbaddr)
  return _internal_skbaddr();
}
inline void KfreeSkbFtraceEvent::_internal_set_skbaddr(uint64_t value) {
  _has_bits_[0] |= 0x00000002u;
  skbaddr_ = value;
}
inline void KfreeSkbFtraceEvent::set_skbaddr(uint64_t value) {
  _internal_set_skbaddr(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.KfreeSkbFtraceEvent.skbaddr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fskb_2eproto
