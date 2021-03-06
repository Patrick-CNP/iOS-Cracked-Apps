//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSSLLDetailCommentTableViewDelegate.h"

@class NSMutableArray, NSString, TBSNSSLLDetailBaseItem, TBSNSSLLDetailCommentTableView, TBSNSSLLDetailOperateService;

@interface TBSNSSLLDetailNavHandler : NSObject <TBSNSSLLDetailCommentTableViewDelegate, TBSNSBasicServiceDelegate>
{
    _Bool _isFeedCollect;
    NSMutableArray *_navMenuAry;
    TBSNSSLLDetailOperateService *_deleteFeedService;
    TBSNSSLLDetailCommentTableView *_tableView;
    TBSNSSLLDetailBaseItem *_baseItem;
}

@property(retain, nonatomic) TBSNSSLLDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(nonatomic) __weak TBSNSSLLDetailCommentTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBSNSSLLDetailOperateService *deleteFeedService; // @synthesize deleteFeedService=_deleteFeedService;
@property(retain, nonatomic) NSMutableArray *navMenuAry; // @synthesize navMenuAry=_navMenuAry;
@property(nonatomic) _Bool isFeedCollect; // @synthesize isFeedCollect=_isFeedCollect;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (id)getParamsForCollectOperation;
- (void)updateCollectBtn:(_Bool)arg1;
- (void)operateFeedCollect;
- (void)dealWithFeedCollect;
- (void)handleNavBarWithBaseItem:(id)arg1 extendItem:(id)arg2;
- (id)initWithDetailTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

