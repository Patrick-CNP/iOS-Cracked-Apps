//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSString;

@interface KTV_FriendSongInfo : KTVObjectModel
{
    int _showType;
    KTVPlayerBaseInfo *_playerBase;
    NSString *_opusName;
    long long _opusID;
    long long _createTime;
    long long _focusTime;
}

+ (id)keyMapper;
@property(nonatomic) long long focusTime; // @synthesize focusTime=_focusTime;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long opusID; // @synthesize opusID=_opusID;
@property(copy, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase; // @synthesize playerBase=_playerBase;
- (void).cxx_destruct;
- (void)resetProperties;
- (void)dealloc;
- (id)init;

@end

