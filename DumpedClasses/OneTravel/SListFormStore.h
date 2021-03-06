//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SListFormView;

@interface SListFormStore : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id <SListFormViewDelegate> _delegate;
    SListFormView *_listFormView;
    NSArray *_dataArray;
}

@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak SListFormView *listFormView; // @synthesize listFormView=_listFormView;
@property(nonatomic) __weak id <SListFormViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadListFormDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithListFormView:(id)arg1;
- (id)modelForCellAtIndexPath:(id)arg1;
- (id)modelForSection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

