//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

#import "QLGalleryTopBarViewDelegate.h"

@class NSString, QLActionToolBar, QLGalleryTopBarView;

@interface URLPhotoBrowserViewController : PhotoBrowserBaseViewContoller <QLGalleryTopBarViewDelegate>
{
    int _editStyle;
    id <URLPhotoBrowserViewControllerDelegate> _delegate;
    QLGalleryTopBarView *_topBgView;
    QLActionToolBar *_bottomActionTabBar;
}

@property(retain, nonatomic) QLActionToolBar *bottomActionTabBar; // @synthesize bottomActionTabBar=_bottomActionTabBar;
@property(retain, nonatomic) QLGalleryTopBarView *topBgView; // @synthesize topBgView=_topBgView;
@property(nonatomic) int editStyle; // @synthesize editStyle=_editStyle;
@property(nonatomic) __weak id <URLPhotoBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)setPicElementsCounts:(id)arg1 oldPhoto:(id)arg2;
- (void)pressBackButton;
- (void)updateCurrentPhotoWithImageDic:(id)arg1;
- (void)didPressEditItem:(id)arg1;
- (void)didPressRightTopButtonAction:(id)arg1;
- (void)didPressLeftTopButtonAction:(id)arg1;
- (void)refreshLeftTopButtonTitle;
- (id)getToolbarItems;
- (void)singleTapDetected;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canShowPageControl;
- (_Bool)controlGraffitiEnableOrNotForPage:(long long)arg1;
- (void)didScrollToPage:(long long)arg1;
- (_Bool)isHorizontal;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initCommon;
- (id)initWithAssetList:(id)arg1 editStyle:(int)arg2;
- (id)initWithPhotoCount:(long long)arg1 editStyle:(int)arg2;
- (id)initWithUrlPhotoItems:(id)arg1;
- (id)init;
- (id)getPhotoWithIndex:(unsigned long long)arg1;
- (void)setSelectList:(id)arg1;
- (void)setThumbUrls:(id)arg1;
- (void)setPhotoUrls:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
