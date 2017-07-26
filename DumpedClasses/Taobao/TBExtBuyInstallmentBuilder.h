//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBaseBuilder.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, StyleKitContext, TBExtBuyInstallmentBottomBar, TBExtBuyInstallmentMutexHelper, TBTradeInstallmentPickerModel, UITableView, UIView;

@interface TBExtBuyInstallmentBuilder : TBExtBaseBuilder <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_memoView;
    UIView *_topView;
    UITableView *_tableView;
    NSMutableArray *_selectedNumArray;
    TBExtBuyInstallmentBottomBar *_bottomBar;
    TBTradeInstallmentPickerModel *_model;
    StyleKitContext *_styleKitContext;
    id <TBExtBuyImageProtocol> _imageLoader;
    TBExtBuyInstallmentMutexHelper *_helper;
}

@property(retain, nonatomic) TBExtBuyInstallmentMutexHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(nonatomic) __weak TBTradeInstallmentPickerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBExtBuyInstallmentBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableArray *selectedNumArray; // @synthesize selectedNumArray=_selectedNumArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *memoView; // @synthesize memoView=_memoView;
- (void).cxx_destruct;
- (void)memoCloseButtonAction:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setBuilderModel:(id)arg1;
- (void)buildContentToView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
