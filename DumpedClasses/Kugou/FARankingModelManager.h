//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAObserverContainer, FARankingDAO;

@interface FARankingModelManager : NSObject
{
    id <FARankingModelProtocol> _rankingModel;
    FAObserverContainer *_observerContainer;
    FARankingDAO *_DAO;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FARankingDAO *DAO; // @synthesize DAO=_DAO;
@property(retain, nonatomic) FAObserverContainer *observerContainer; // @synthesize observerContainer=_observerContainer;
@property(retain, nonatomic) id <FARankingModelProtocol> rankingModel; // @synthesize rankingModel=_rankingModel;
- (void).cxx_destruct;
- (void)didMobileChartFailWithError:(id)arg1;
- (void)didChartFailWithError:(id)arg1;
- (void)cleanData;
- (void)getMobileChartData;
- (void)getChartData;
- (void)installServerProvider:(id)arg1;
- (void)installModel:(id)arg1;
- (void)doNotifyObservers:(CDUnknownBlockType)arg1;
- (_Bool)removeObserver:(id)arg1;
- (_Bool)addObserver:(id)arg1;
- (id)init;

@end
