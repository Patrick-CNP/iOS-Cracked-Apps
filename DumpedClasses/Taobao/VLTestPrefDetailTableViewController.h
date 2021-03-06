//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "VLViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface VLTestPrefDetailTableViewController : UITableViewController <VLViewDelegate>
{
    _Bool _reuseCell;
    NSArray *_dataArray;
    NSMutableDictionary *_startDateDic;
    NSMutableDictionary *_indexPathDic;
    NSMutableDictionary *_footerViewDic;
}

@property(retain, nonatomic) NSMutableDictionary *footerViewDic; // @synthesize footerViewDic=_footerViewDic;
@property(retain, nonatomic) NSMutableDictionary *indexPathDic; // @synthesize indexPathDic=_indexPathDic;
@property(retain, nonatomic) NSMutableDictionary *startDateDic; // @synthesize startDateDic=_startDateDic;
@property(nonatomic) _Bool reuseCell; // @synthesize reuseCell=_reuseCell;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)onLoadFinishWithVLView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 ReuseCell:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

