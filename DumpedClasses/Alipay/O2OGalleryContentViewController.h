//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OViewController.h"

#import "BEEPhotoBrowserDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class APExceptionView, NSString, O2OMerchantGalleryModel, UICollectionView, UIImageView;

@interface O2OGalleryContentViewController : O2OViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, BEEPhotoBrowserDelegate>
{
    O2OMerchantGalleryModel *_galleryModel;
    long long _maxExposureIndex;
    UICollectionView *_collectionView;
    UIImageView *_bottomLogoView;
    APExceptionView *_exceptionView;
    long long _viewState;
}

@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UIImageView *bottomLogoView; // @synthesize bottomLogoView=_bottomLogoView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long maxExposureIndex; // @synthesize maxExposureIndex=_maxExposureIndex;
@property(retain, nonatomic) O2OMerchantGalleryModel *galleryModel; // @synthesize galleryModel=_galleryModel;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadDataIfNeeded;
- (void)layoutBottomLogoView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateViewState;
- (void)footerViewTapped:(id)arg1;
- (void)hideExceptionView;
- (void)showExceptionView;
- (_Bool)canShowModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupCollectionView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
