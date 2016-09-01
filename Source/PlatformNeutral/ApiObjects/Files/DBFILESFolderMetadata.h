///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESMetadata.h"
#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESFolderMetadata;
@class DBFILESFolderSharingInfo;
@class DBPROPERTIESPropertyGroup;

#pragma mark - API Object

///
/// The FolderMetadata struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESFolderMetadata : DBFILESMetadata <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for the folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull id_;

/// Deprecated. Please use sharingInfo instead.
@property(nonatomic, readonly) NSString * _Nullable sharedFolderId;

/// Set if the folder is contained in a shared folder or is a shared folder mount point.
@property(nonatomic, readonly) DBFILESFolderSharingInfo * _Nullable sharingInfo;

/// Additional information if the file has custom properties with the property template specified.
@property(nonatomic, readonly) NSArray<DBPROPERTIESPropertyGroup *> * _Nullable propertyGroups;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESFolderMetadata struct (exposes all instance variables).
///
/// @param name The last component of the path (including extension). This never contains a slash.
/// @param id_ A unique identifier for the folder.
/// @param pathLower The lowercased full path in the user's Dropbox. This always starts with a
/// slash. This field will be null if the file or folder is not mounted.
/// @param pathDisplay The cased path to be used for display purposes only. In rare instances the
/// casing will not correctly match the user's filesystem, but this behavior will match the path
/// provided in the Core API v1. Changes to the casing of paths won't be returned by
/// :route:`list_folder/continue`. This field will be null if the file or folder is not mounted.
/// @param parentSharedFolderId Deprecated. Please use
/// :field:`FileSharingInfo.parent_shared_folder_id` or
/// :field:`FolderSharingInfo.parent_shared_folder_id` instead.
/// @param sharedFolderId Deprecated. Please use :field:`sharing_info` instead.
/// @param sharingInfo Set if the folder is contained in a shared folder or is a shared folder mount
/// point.
/// @param propertyGroups Additional information if the file has custom properties with the property
/// template specified.
///
/// @return An initialized DBFILESFolderMetadata instance.
///
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name
                                 id_:(NSString * _Nonnull)id_
                           pathLower:(NSString * _Nullable)pathLower
                         pathDisplay:(NSString * _Nullable)pathDisplay
                parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId
                      sharedFolderId:(NSString * _Nullable)sharedFolderId
                         sharingInfo:(DBFILESFolderSharingInfo * _Nullable)sharingInfo
                      propertyGroups:(NSArray<DBPROPERTIESPropertyGroup *> * _Nullable)propertyGroups;

///
/// Convenience constructor for the DBFILESFolderMetadata struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param name The last component of the path (including extension). This never contains a slash.
/// @param id_ A unique identifier for the folder.
///
/// @return An initialized DBFILESFolderMetadata instance.
///
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the FolderMetadata struct.
///
@interface DBFILESFolderMetadataSerializer : NSObject

///
/// Serializes DBFILESFolderMetadata instances.
///
/// @param instance An instance of the DBFILESFolderMetadata API object.
///
/// @return A json-compatible dictionary representation of the DBFILESFolderMetadata API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESFolderMetadata * _Nonnull)instance;

///
/// Deserializes DBFILESFolderMetadata instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESFolderMetadata API object.
///
/// @return An instantiation of the DBFILESFolderMetadata object.
///
+ (DBFILESFolderMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end