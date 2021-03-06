//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTGoogleMapViewDelegate.h"

@class CTGoogleMapView, NSMutableArray, NSString;

@interface CTGoogleMapViewController : CTRootViewController <CTGoogleMapViewDelegate>
{
    CTGoogleMapView *_mapView;
    NSMutableArray *_anotationList;
}

@property(retain, nonatomic) NSMutableArray *anotationList; // @synthesize anotationList=_anotationList;
@property(retain, nonatomic) CTGoogleMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)loadGoogleMapFail;
- (void)loadGoogleMapFinish;
- (void)goBack:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (id)initWithAnotationList:(id)arg1;
- (id)initWithAnotation:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 anotationTitle:(id)arg3 subTitle:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

