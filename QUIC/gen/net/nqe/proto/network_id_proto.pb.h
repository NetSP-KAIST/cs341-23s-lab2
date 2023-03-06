// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: network_id_proto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_network_5fid_5fproto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_network_5fid_5fproto_2eproto

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
#include "net/base/net_export.h"
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_network_5fid_5fproto_2eproto NET_EXPORT_PRIVATE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct NET_EXPORT_PRIVATE TableStruct_network_5fid_5fproto_2eproto {
static const uint32_t offsets[];
};
namespace net {
namespace nqe {
namespace internal {
class NetworkIDProto;
struct NetworkIDProtoDefaultTypeInternal;
NET_EXPORT_PRIVATE extern NetworkIDProtoDefaultTypeInternal _NetworkIDProto_default_instance_;
}  // namespace internal
}  // namespace nqe
}  // namespace net
PROTOBUF_NAMESPACE_OPEN
template<> NET_EXPORT_PRIVATE ::net::nqe::internal::NetworkIDProto* Arena::CreateMaybeMessage<::net::nqe::internal::NetworkIDProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace net {
namespace nqe {
namespace internal {

// ===================================================================

class NET_EXPORT_PRIVATE NetworkIDProto final :
public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:net.nqe.internal.NetworkIDProto) */ {
public:
inline NetworkIDProto() : NetworkIDProto(nullptr) {}
~NetworkIDProto() override;
explicit PROTOBUF_CONSTEXPR NetworkIDProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

NetworkIDProto(const NetworkIDProto& from);
NetworkIDProto(NetworkIDProto&& from) noexcept
: NetworkIDProto() {
*this = ::std::move(from);
}

inline NetworkIDProto& operator=(const NetworkIDProto& from) {
CopyFrom(from);
return *this;
}
inline NetworkIDProto& operator=(NetworkIDProto&& from) noexcept {
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

static const NetworkIDProto& default_instance() {
return *internal_default_instance();
}
static inline const NetworkIDProto* internal_default_instance() {
return reinterpret_cast<const NetworkIDProto*>(
&_NetworkIDProto_default_instance_);
}
static constexpr int kIndexInFileMessages =
0;

friend void swap(NetworkIDProto& a, NetworkIDProto& b) {
a.Swap(&b);
}
PROTOBUF_NOINLINE void Swap(NetworkIDProto* other) {
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
void UnsafeArenaSwap(NetworkIDProto* other) {
if (other == this) return;
GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
InternalSwap(other);
}

// implements Message ----------------------------------------------

NetworkIDProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
return CreateMaybeMessage<NetworkIDProto>(arena);
}
void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
void CopyFrom(const NetworkIDProto& from);
void MergeFrom(const NetworkIDProto& from);
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
void InternalSwap(NetworkIDProto* other);

private:
friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
return "net.nqe.internal.NetworkIDProto";
}
protected:
explicit NetworkIDProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
bool is_message_owned = false);
public:

std::string GetTypeName() const final;

// nested types ----------------------------------------------------

// accessors -------------------------------------------------------

enum : int {
kIdFieldNumber = 2,
kConnectionTypeFieldNumber = 1,
kSignalStrengthFieldNumber = 3,
};
// optional string id = 2;
bool has_id() const;
private:
bool _internal_has_id() const;
public:
void clear_id();
const std::string& id() const;
template <typename ArgT0 = const std::string&, typename... ArgT>
void set_id(ArgT0&& arg0, ArgT... args);
std::string* mutable_id();
PROTOBUF_NODISCARD std::string* release_id();
void set_allocated_id(std::string* id);
private:
const std::string& _internal_id() const;
inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
std::string* _internal_mutable_id();
public:

// optional int32 connection_type = 1;
bool has_connection_type() const;
private:
bool _internal_has_connection_type() const;
public:
void clear_connection_type();
int32_t connection_type() const;
void set_connection_type(int32_t value);
private:
int32_t _internal_connection_type() const;
void _internal_set_connection_type(int32_t value);
public:

// optional int32 signal_strength = 3;
bool has_signal_strength() const;
private:
bool _internal_has_signal_strength() const;
public:
void clear_signal_strength();
int32_t signal_strength() const;
void set_signal_strength(int32_t value);
private:
int32_t _internal_signal_strength() const;
void _internal_set_signal_strength(int32_t value);
public:

// @@protoc_insertion_point(class_scope:net.nqe.internal.NetworkIDProto)
private:
class _Internal;

template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
typedef void InternalArenaConstructable_;
typedef void DestructorSkippable_;
::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
int32_t connection_type_;
int32_t signal_strength_;
friend struct ::TableStruct_network_5fid_5fproto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetworkIDProto

// optional int32 connection_type = 1;
inline bool NetworkIDProto::_internal_has_connection_type() const {
bool value = (_has_bits_[0] & 0x00000002u) != 0;
return value;
}
inline bool NetworkIDProto::has_connection_type() const {
return _internal_has_connection_type();
}
inline void NetworkIDProto::clear_connection_type() {
connection_type_ = 0;
_has_bits_[0] &= ~0x00000002u;
}
inline int32_t NetworkIDProto::_internal_connection_type() const {
return connection_type_;
}
inline int32_t NetworkIDProto::connection_type() const {
// @@protoc_insertion_point(field_get:net.nqe.internal.NetworkIDProto.connection_type)
return _internal_connection_type();
}
inline void NetworkIDProto::_internal_set_connection_type(int32_t value) {
_has_bits_[0] |= 0x00000002u;
connection_type_ = value;
}
inline void NetworkIDProto::set_connection_type(int32_t value) {
_internal_set_connection_type(value);
// @@protoc_insertion_point(field_set:net.nqe.internal.NetworkIDProto.connection_type)
}

// optional string id = 2;
inline bool NetworkIDProto::_internal_has_id() const {
bool value = (_has_bits_[0] & 0x00000001u) != 0;
return value;
}
inline bool NetworkIDProto::has_id() const {
return _internal_has_id();
}
inline void NetworkIDProto::clear_id() {
id_.ClearToEmpty();
_has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NetworkIDProto::id() const {
// @@protoc_insertion_point(field_get:net.nqe.internal.NetworkIDProto.id)
return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NetworkIDProto::set_id(ArgT0&& arg0, ArgT... args) {
_has_bits_[0] |= 0x00000001u;
id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
// @@protoc_insertion_point(field_set:net.nqe.internal.NetworkIDProto.id)
}
inline std::string* NetworkIDProto::mutable_id() {
std::string* _s = _internal_mutable_id();
// @@protoc_insertion_point(field_mutable:net.nqe.internal.NetworkIDProto.id)
return _s;
}
inline const std::string& NetworkIDProto::_internal_id() const {
return id_.Get();
}
inline void NetworkIDProto::_internal_set_id(const std::string& value) {
_has_bits_[0] |= 0x00000001u;
id_.Set(value, GetArenaForAllocation());
}
inline std::string* NetworkIDProto::_internal_mutable_id() {
_has_bits_[0] |= 0x00000001u;
return id_.Mutable(GetArenaForAllocation());
}
inline std::string* NetworkIDProto::release_id() {
// @@protoc_insertion_point(field_release:net.nqe.internal.NetworkIDProto.id)
if (!_internal_has_id()) {
return nullptr;
}
_has_bits_[0] &= ~0x00000001u;
auto* p = id_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
if (id_.IsDefault()) {
id_.Set("", GetArenaForAllocation());
}
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
return p;
}
inline void NetworkIDProto::set_allocated_id(std::string* id) {
if (id != nullptr) {
_has_bits_[0] |= 0x00000001u;
} else {
_has_bits_[0] &= ~0x00000001u;
}
id_.SetAllocated(id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
if (id_.IsDefault()) {
id_.Set("", GetArenaForAllocation());
}
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
// @@protoc_insertion_point(field_set_allocated:net.nqe.internal.NetworkIDProto.id)
}

// optional int32 signal_strength = 3;
inline bool NetworkIDProto::_internal_has_signal_strength() const {
bool value = (_has_bits_[0] & 0x00000004u) != 0;
return value;
}
inline bool NetworkIDProto::has_signal_strength() const {
return _internal_has_signal_strength();
}
inline void NetworkIDProto::clear_signal_strength() {
signal_strength_ = 0;
_has_bits_[0] &= ~0x00000004u;
}
inline int32_t NetworkIDProto::_internal_signal_strength() const {
return signal_strength_;
}
inline int32_t NetworkIDProto::signal_strength() const {
// @@protoc_insertion_point(field_get:net.nqe.internal.NetworkIDProto.signal_strength)
return _internal_signal_strength();
}
inline void NetworkIDProto::_internal_set_signal_strength(int32_t value) {
_has_bits_[0] |= 0x00000004u;
signal_strength_ = value;
}
inline void NetworkIDProto::set_signal_strength(int32_t value) {
_internal_set_signal_strength(value);
// @@protoc_insertion_point(field_set:net.nqe.internal.NetworkIDProto.signal_strength)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace internal
}  // namespace nqe
}  // namespace net

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_network_5fid_5fproto_2eproto