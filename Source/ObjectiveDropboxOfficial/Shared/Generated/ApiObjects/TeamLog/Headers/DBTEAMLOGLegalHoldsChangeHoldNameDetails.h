///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLegalHoldsChangeHoldNameDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsChangeHoldNameDetails` struct.
///
/// Renamed a hold.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLegalHoldsChangeHoldNameDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Hold ID.
@property (nonatomic, readonly, copy) NSString *legalHoldId;

/// Previous Name.
@property (nonatomic, readonly, copy) NSString *previousValue;

/// New Name.
@property (nonatomic, readonly, copy) NSString *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param legalHoldId Hold ID.
/// @param previousValue Previous Name.
/// @param dNewValue New Name.
///
/// @return An initialized instance.
///
- (instancetype)initWithLegalHoldId:(NSString *)legalHoldId
                      previousValue:(NSString *)previousValue
                          dNewValue:(NSString *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsChangeHoldNameDetails` struct.
///
@interface DBTEAMLOGLegalHoldsChangeHoldNameDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGLegalHoldsChangeHoldNameDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGLegalHoldsChangeHoldNameDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLegalHoldsChangeHoldNameDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGLegalHoldsChangeHoldNameDetails *)instance;

///
/// Deserializes `DBTEAMLOGLegalHoldsChangeHoldNameDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLegalHoldsChangeHoldNameDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGLegalHoldsChangeHoldNameDetails`
/// object.
///
+ (DBTEAMLOGLegalHoldsChangeHoldNameDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END