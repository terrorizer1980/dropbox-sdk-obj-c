///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESUploadSessionLookupError.h"
#import "DBXFILESUploadSessionOffsetError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadSessionLookupError 

- (instancetype)initWithNotFound {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionLookupErrorNotFound;
    }
    return self;
}

- (instancetype)initWithIncorrectOffset:(DBXFILESUploadSessionOffsetError *)incorrectOffset {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionLookupErrorIncorrectOffset;
        _incorrectOffset = incorrectOffset;
    }
    return self;
}

- (instancetype)initWithClosed {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionLookupErrorClosed;
    }
    return self;
}

- (instancetype)initWithNotClosed {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionLookupErrorNotClosed;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionLookupErrorOther;
    }
    return self;
}

- (BOOL)isNotFound {
    return _tag == DBXFILESUploadSessionLookupErrorNotFound;
}

- (BOOL)isIncorrectOffset {
    return _tag == DBXFILESUploadSessionLookupErrorIncorrectOffset;
}

- (BOOL)isClosed {
    return _tag == DBXFILESUploadSessionLookupErrorClosed;
}

- (BOOL)isNotClosed {
    return _tag == DBXFILESUploadSessionLookupErrorNotClosed;
}

- (BOOL)isOther {
    return _tag == DBXFILESUploadSessionLookupErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESUploadSessionLookupErrorNotFound:
           return @"DBXFILESUploadSessionLookupErrorNotFound";
        case DBXFILESUploadSessionLookupErrorIncorrectOffset:
           return @"DBXFILESUploadSessionLookupErrorIncorrectOffset";
        case DBXFILESUploadSessionLookupErrorClosed:
           return @"DBXFILESUploadSessionLookupErrorClosed";
        case DBXFILESUploadSessionLookupErrorNotClosed:
           return @"DBXFILESUploadSessionLookupErrorNotClosed";
        case DBXFILESUploadSessionLookupErrorOther:
           return @"DBXFILESUploadSessionLookupErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESUploadSessionOffsetError *)incorrectOffset {
    if (_tag != DBXFILESUploadSessionLookupErrorIncorrectOffset) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESUploadSessionLookupErrorIncorrectOffset`, but was %@.", [self getTagName]];
    }
    return _incorrectOffset;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESUploadSessionLookupErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadSessionLookupErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadSessionLookupErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadSessionLookupErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadSessionLookupError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isNotFound]) {
        jsonDict[@".tag"] = @"not_found";
    }
    else if ([valueObj isIncorrectOffset]) {
        jsonDict = [[DBXFILESUploadSessionOffsetErrorSerializer serialize:valueObj.incorrectOffset] mutableCopy];
        jsonDict[@".tag"] = @"incorrect_offset";
    }
    else if ([valueObj isClosed]) {
        jsonDict[@".tag"] = @"closed";
    }
    else if ([valueObj isNotClosed]) {
        jsonDict[@".tag"] = @"not_closed";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESUploadSessionLookupError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"not_found"]) {
        return [[DBXFILESUploadSessionLookupError alloc] initWithNotFound];
    }
    else if ([tag isEqualToString:@"incorrect_offset"]) {
        DBXFILESUploadSessionOffsetError *incorrectOffset = [DBXFILESUploadSessionOffsetErrorSerializer deserialize:valueDict];
        return [[DBXFILESUploadSessionLookupError alloc] initWithIncorrectOffset:incorrectOffset];
    }
    else if ([tag isEqualToString:@"closed"]) {
        return [[DBXFILESUploadSessionLookupError alloc] initWithClosed];
    }
    else if ([tag isEqualToString:@"not_closed"]) {
        return [[DBXFILESUploadSessionLookupError alloc] initWithNotClosed];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESUploadSessionLookupError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end