//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGHandleUrlManagerDelegate.h"

@class KQShareBLL, NSString;

@interface KGULinkHandleUrl : NSObject <KGHandleUrlManagerDelegate>
{
    unsigned long long _playAction;
    KQShareBLL *_shareBLL;
}

@property(retain, nonatomic) KQShareBLL *shareBLL; // @synthesize shareBLL=_shareBLL;
@property(nonatomic) unsigned long long playAction; // @synthesize playAction=_playAction;
- (void).cxx_destruct;
- (void)resetUI;
- (void)sendBIStatisticsWithAction:(unsigned long long)arg1 fromPage:(id)arg2;
- (void)sendBIStatisticsWithType:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)gotoEmbededWebVCWithDic:(id)arg1;
- (void)toRunSpecialInfoVc:(id)arg1;
- (void)gotoKuqunWithDic:(id)arg1;
- (void)playMVWithInfo:(id)arg1 action:(unsigned long long)arg2;
- (void)rankWithSongInfo:(id)arg1 action:(unsigned long long)arg2;
- (void)songSheetAndAlbumWithSongInfo:(id)arg1 action:(unsigned long long)arg2;
- (void)playPageWithSongInfo:(id)arg1 action:(unsigned long long)arg2;
- (void)gotoPlayVCWithType:(unsigned long long)arg1 action:(unsigned long long)arg2 songInfo:(id)arg3;
- (void)startULinkWithUrl:(id)arg1;
- (id)key;
- (void)sendKey:(id)arg1 AndParams:(id)arg2 AndUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

