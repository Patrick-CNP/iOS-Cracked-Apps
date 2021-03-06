//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NVMTableView;

@interface NVMOrderTimelineViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_orderId;
    NSString *_restaurantID;
    NVMTableView *_tableView;
    NSArray *_timelineRecords;
}

@property(retain, nonatomic) NSArray *timelineRecords; // @synthesize timelineRecords=_timelineRecords;
@property(retain, nonatomic) NVMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)safeRestaurantID;
- (id)timelineRecordViewModelForIndexPath:(id)arg1;
- (void)openURL:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableData;
- (void)loadData;
- (void)reloadData;
- (void)loadViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

