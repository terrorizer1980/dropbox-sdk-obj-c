///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersSuspendError;

/// 
/// The `DBXTEAMMembersSuspendError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersSuspendError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersSuspendErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMMembersSuspendError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMembersSuspendErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBXTEAMMembersSuspendErrorUserNotFound,

    /// The user is not a member of the team.
    DBXTEAMMembersSuspendErrorUserNotInTeam,

    /// (no description).
    DBXTEAMMembersSuspendErrorOther,

    /// The user is not active, so it cannot be suspended.
    DBXTEAMMembersSuspendErrorSuspendInactiveUser,

    /// The user is the last admin of the team, so it cannot be suspended.
    DBXTEAMMembersSuspendErrorSuspendLastAdmin,

    /// Team is full. The organization has no available licenses.
    DBXTEAMMembersSuspendErrorTeamLicenseLimit,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMMembersSuspendErrorTag tag;

/// Initializes union class with tag state of `UserNotFound`.
- (nonnull instancetype)initWithUserNotFound;

/// Initializes union class with tag state of `UserNotInTeam`.
- (nonnull instancetype)initWithUserNotInTeam;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `SuspendInactiveUser`.
- (nonnull instancetype)initWithSuspendInactiveUser;

/// Initializes union class with tag state of `SuspendLastAdmin`.
- (nonnull instancetype)initWithSuspendLastAdmin;

/// Initializes union class with tag state of `TeamLicenseLimit`.
- (nonnull instancetype)initWithTeamLicenseLimit;

/// Returns whether the union's current tag state has value `UserNotFound`.
- (BOOL)isUserNotFound;

/// Returns whether the union's current tag state has value `UserNotInTeam`.
- (BOOL)isUserNotInTeam;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value
/// `SuspendInactiveUser`.
- (BOOL)isSuspendInactiveUser;

/// Returns whether the union's current tag state has value `SuspendLastAdmin`.
- (BOOL)isSuspendLastAdmin;

/// Returns whether the union's current tag state has value `TeamLicenseLimit`.
- (BOOL)isTeamLicenseLimit;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXTEAMMembersSuspendError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMMembersSuspendError` union.
/// 
@interface DBXTEAMMembersSuspendErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMembersSuspendError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersSuspendError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMembersSuspendError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMembersSuspendError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end