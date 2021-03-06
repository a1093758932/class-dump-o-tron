//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSArray, NSString;

@interface MZWebServiceRecommendPricing : MZITunesProducerServiceClient
{
    NSString *_vendorId;
    NSString *_baseCurrency;
    NSString *_physicalListPrice;
    NSString *_suggestedIBookstorePrice;
    NSString *_contentType;
    NSString *_pricingType;
    NSString *_salesStartDate;
    NSArray *_territoryPricingInfo;
    NSString *_maxForeignExchangeRateDate;
}

- (id)maxForeignExchangeRateDate;
- (id)territoryPricingInfo;
- (id)salesStartDate;
- (void)setSalesStartDate:(id)arg1;
- (id)pricingType;
- (void)setPricingType:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)suggestedIBookstorePrice;
- (void)setSuggestedIBookstorePrice:(id)arg1;
- (id)physicalListPrice;
- (void)setPhysicalListPrice:(id)arg1;
- (id)baseCurrency;
- (void)setBaseCurrency:(id)arg1;
- (id)vendorId;
- (void)setVendorId:(id)arg1;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (void)operationWillStart;
- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (id)generateArguments;
- (void)dealloc;
- (id)init;

@end

