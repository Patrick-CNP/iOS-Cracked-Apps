//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAlreadyDownloadView.h"

#import "CMScrollIndexBarDelegate.h"
#import "MCSearchBarDelegate.h"
#import "NMMVCellManagementDelegate.h"
#import "NMManagementSectionHeaderViewDelegate.h"
#import "NMPlaylistManipulateDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CMScrollIndexBar, NMAlreadyDownloadResourceHeaderView, NMMenuData, NMMenuDownSide, NMPlaylistManipulateView, NMTableViewContainer, NSMutableArray, NSMutableDictionary, NSString;

@interface NMAlreadyDownloadMVView : NMAlreadyDownloadView <MCSearchBarDelegate, NMPlaylistManipulateDelegate, NMManagementSectionHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource, CMScrollIndexBarDelegate, NMMVCellManagementDelegate>
{
    _Bool _isLoading;
    _Bool _needLoadData;
    _Bool _isSearching;
    _Bool _firstShow;
    unsigned long long _sortMode;
    NSMutableArray *_mvViewDataSource;
    NSMutableArray *_selectedMVArray;
    NSMutableArray *_alphabetMVNameMVArray;
    NSMutableArray *_alphabetArtistNameMVArray;
    NSMutableDictionary *_mvNameSectionIndexDict;
    NSMutableDictionary *_artistNameSectionIndexDict;
    NSMutableArray *_mvNameIndexBarArray;
    NSMutableArray *_artistNameIndexBarArray;
    NSMutableArray *_searchDisplayArray;
    NMAlreadyDownloadResourceHeaderView *_headerView;
    NMTableViewContainer *_tableViewContainer;
    NMMenuDownSide *_manageMenu;
    NMMenuData *_manageMenuItemSort;
    NMMenuData *_manageMenuItemMultiple;
    NMMenuDownSide *_sortMenu;
    NMMenuData *_sortTime;
    NMMenuData *_sortMVName;
    NMMenuData *_sortArtistName;
    _Bool _underMultiple;
    NMPlaylistManipulateView *_manipulateView;
    _Bool _isHidingMessageView;
    id <NMAlreadyDownloadMVViewDelegate> _delegate;
    CMScrollIndexBar *_indexBar;
}

@property(retain, nonatomic) CMScrollIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(nonatomic) __weak id <NMAlreadyDownloadMVViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addClickActionLog:(id)arg1;
- (void)deleteDownloadButtonClicked:(id)arg1;
- (_Bool)mcsearchBarShouldReturn:(id)arg1;
- (void)mcsearchBarTextDidChange:(id)arg1;
- (void)mcsearchBarDidBeginEditing:(id)arg1;
- (void)updateDataSourceAfterDeleteDownloadViewSource:(id)arg1;
- (void)doDeleteMV:(id)arg1 sortMode:(unsigned long long)arg2;
- (void)deleteMV:(id)arg1;
- (void)scrollIndexSelectionDidChange:(id)arg1 index:(int)arg2 title:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)mvCellCheckBoxChecked:(id)arg1;
- (void)updateSelectedMV:(id)arg1 checked:(_Bool)arg2;
- (void)managementSectionHeaderView:(id)arg1 checkAll:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createMVCell:(id)arg1 tableView:(id)arg2;
- (id)findMVInDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)downloadStatusChanged:(id)arg1;
- (void)switchHeaderView:(_Bool)arg1;
- (void)switchManageButton:(_Bool)arg1;
- (void)resignSearchBar;
- (void)exitSearch;
- (void)resetForMultiple;
- (void)exitMultiple;
- (void)enterMultiple;
- (void)_switchSortMode:(unsigned long long)arg1;
- (void)gotoSortByArtistName;
- (void)gotoSortByMVName;
- (void)gotoSortByTime;
- (void)gotoSortMenu;
- (void)exitManage:(id)arg1;
- (void)enterManage:(id)arg1;
- (void)configIndexBar;
- (void)loadMVSectionIndex;
- (void)generateMVViewDisplaySource;
- (void)refreshView;
- (void)refreshDataAndView;
- (void)prepareAlphabet;
- (void)calcDownloadSize;
- (void)downloadMVsDidLoad:(id)arg1;
- (void)doLoadOfflineData;
- (void)viewWillAppear;
- (void)hideView;
- (void)showView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

