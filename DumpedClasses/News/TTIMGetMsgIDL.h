//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TTIMGetMsgIDL : NSObject
{
    int _count;
    NSDictionary *_mapInfo;
    NSString *_orderedGroupIDs;
}

@property(retain, nonatomic) NSString *orderedGroupIDs; // @synthesize orderedGroupIDs=_orderedGroupIDs;
@property(retain, nonatomic) NSDictionary *mapInfo; // @synthesize mapInfo=_mapInfo;
@property(nonatomic) int count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)extraTokenString;
- (id)encodeToHttpParams;
- (id)encode;

@end

