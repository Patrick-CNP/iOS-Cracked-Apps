//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EGORefreshTableHeaderView.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "UIScrollViewDelegate.h"

@class KGThemeLabel, NSString, UITableView, UIView;

@interface PullToRefreshView : EGORefreshTableHeaderView <EGORefreshTableHeaderDelegate, UIScrollViewDelegate>
{
    _Bool _reloading;
    int _type;
    int _refreshType;
    UITableView *_refreshTableView;
    unsigned long long _pageNum;
    unsigned long long _pageSize;
    CDUnknownBlockType _refreshCallback;
    UIView *_loadMoreView;
    unsigned long long _total;
    KGThemeLabel *_loadMoreLabel;
}

@property(retain, nonatomic) KGThemeLabel *loadMoreLabel; // @synthesize loadMoreLabel=_loadMoreLabel;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(retain, nonatomic) UIView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(copy, nonatomic) CDUnknownBlockType refreshCallback; // @synthesize refreshCallback=_refreshCallback;
@property(nonatomic) int refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) __weak UITableView *refreshTableView; // @synthesize refreshTableView=_refreshTableView;
- (void).cxx_destruct;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource;
- (void)setBottomEdgeInsets:(double)arg1;
- (id)initWithRefreshView:(id)arg1 AndRefreshType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
