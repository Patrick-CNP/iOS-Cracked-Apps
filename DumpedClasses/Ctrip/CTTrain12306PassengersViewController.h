//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTTableViewDelegate.h"
#import "CTTrain12306LoginViewControllerDelegate.h"
#import "CTTrain12306PassengerEditingViewControllerDelegate.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, EGORefreshTableHeaderView, NSMutableArray, NSString;

@interface CTTrain12306PassengersViewController : CTRootViewController <CTTrain12306LoginViewControllerDelegate, CTTrain12306PassengerEditingViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, CTTableViewDelegate, EGORefreshTableHeaderDelegate>
{
    _Bool _reloading;
    _Bool _isToLogin;
    CTTableView *_tableViewPassengers;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NSMutableArray *_arrayPassengers;
}

@property(retain, nonatomic) NSMutableArray *arrayPassengers; // @synthesize arrayPassengers=_arrayPassengers;
@property(nonatomic) _Bool isToLogin; // @synthesize isToLogin=_isToLogin;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) CTTableView *tableViewPassengers; // @synthesize tableViewPassengers=_tableViewPassengers;
- (void).cxx_destruct;
- (void)train12306PassengerEditingViewController:(id)arg1 didRemovePersonInfo:(id)arg2;
- (void)train12306PassengerEditingViewController:(id)arg1 didFinishEditingWithPersonInfo:(id)arg2;
- (void)afterNo12306Success:(id)arg1;
- (void)after12306LoginSuccess:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pullDownToRefreshData:(id)arg1;
- (void)onAddPassengerButton:(id)arg1;
- (void)removePassenger:(id)arg1;
- (void)getPassengerListServiceShowLoading:(_Bool)arg1;
- (void)sort;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
