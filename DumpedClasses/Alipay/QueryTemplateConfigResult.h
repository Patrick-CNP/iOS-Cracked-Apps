//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface QueryTemplateConfigResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *baseExt; // @dynamic baseExt;
@property(retain, nonatomic) NSArray *cardConfigs; // @dynamic cardConfigs;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(retain, nonatomic) NSString *fullUpgrade; // @dynamic fullUpgrade;
@property(readonly) _Bool hasBaseExt; // @dynamic hasBaseExt;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasFullUpgrade; // @dynamic hasFullUpgrade;
@property(readonly) _Bool hasInstallFiles; // @dynamic hasInstallFiles;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasOldVersion; // @dynamic hasOldVersion;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *installFiles; // @dynamic installFiles;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(nonatomic) long long oldVersion; // @dynamic oldVersion;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) _Bool success; // @dynamic success;
@property(nonatomic) long long version; // @dynamic version;

@end

