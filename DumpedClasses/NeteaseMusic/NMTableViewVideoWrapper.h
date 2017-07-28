//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDelegate.h"

@class NMTableViewVideoPlayerManager, NSMutableArray, NSString, UITableView;

@interface NMTableViewVideoWrapper : NSObject <UITableViewDelegate>
{
    NSMutableArray *_visibleVideoCells;
    NMTableViewVideoPlayerManager *_manager;
    struct CGPoint _lastOffset;
    double _lastOffsetCapture;
    _Bool _playAfterReload;
    _Bool _userDragging;
    UITableView *_tableView;
    double _topExtraVisibleHeight;
}

@property(nonatomic) double topExtraVisibleHeight; // @synthesize topExtraVisibleHeight=_topExtraVisibleHeight;
@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)shortVideoUrlInfoPreparedNotification:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reregisterAllVisibleVideo:(_Bool)arg1;
- (void)playTopMostVisibleVideo;
- (float)visibleHeightPercentOfCell:(id)arg1;
- (void)setPlayAfterReload;
- (unsigned long long)scrollingSpeed;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) _Bool suspended;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
