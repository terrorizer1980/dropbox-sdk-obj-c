///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCommitInfo;
@class DBFILESUploadSessionCursor;
@class DBFILESUploadSessionFinishArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadSessionFinishArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadSessionFinishArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Contains the upload session ID and the offset.
@property (nonatomic, readonly) DBFILESUploadSessionCursor *cursor;

/// Contains the path and other optional modifiers for the commit.
@property (nonatomic, readonly) DBFILESCommitInfo *commit;

/// NOT YET SUPPORTED. A hash of the file content uploaded in this call. If
/// provided and the uploaded content does not match this hash, an error will be
/// returned. For more information see our Content hash
/// https://www.dropbox.com/developers/reference/content-hash page.
@property (nonatomic, readonly, copy, nullable) NSString *contentHash;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Contains the upload session ID and the offset.
/// @param commit Contains the path and other optional modifiers for the commit.
/// @param contentHash NOT YET SUPPORTED. A hash of the file content uploaded in
/// this call. If provided and the uploaded content does not match this hash, an
/// error will be returned. For more information see our Content hash
/// https://www.dropbox.com/developers/reference/content-hash page.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(DBFILESUploadSessionCursor *)cursor
                        commit:(DBFILESCommitInfo *)commit
                   contentHash:(nullable NSString *)contentHash;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param cursor Contains the upload session ID and the offset.
/// @param commit Contains the path and other optional modifiers for the commit.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(DBFILESUploadSessionCursor *)cursor commit:(DBFILESCommitInfo *)commit;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UploadSessionFinishArg` struct.
///
@interface DBFILESUploadSessionFinishArgSerializer : NSObject

///
/// Serializes `DBFILESUploadSessionFinishArg` instances.
///
/// @param instance An instance of the `DBFILESUploadSessionFinishArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadSessionFinishArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESUploadSessionFinishArg *)instance;

///
/// Deserializes `DBFILESUploadSessionFinishArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadSessionFinishArg` API object.
///
/// @return An instantiation of the `DBFILESUploadSessionFinishArg` object.
///
+ (DBFILESUploadSessionFinishArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
