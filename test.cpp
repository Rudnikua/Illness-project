#include <gtest/gtest.h>
#include "Diseases.h"

TEST(DiseaseTest, ConstructorInitializesFieldsCorrectly) {
    vector<string> symptoms = {"fever", "cough"};
    Disease disease("Common Cold", symptoms, 0.5);

    EXPECT_EQ(disease.treat(), "Treating Common Cold with general treatment.");
    EXPECT_EQ(disease.spread(), "Common ColdSpreads with a contagiousness of 0.500000.");
}

TEST(VirusTest, TreatReturnsCorrectString) {
    vector<string> symptoms = {"fever", "sore throat"};
    Virus virus("Flu", symptoms, 0.7);

    EXPECT_EQ(virus.treat(), "Treating viral infection Flu with antivirals.");
}

TEST(BacteriaTest, TreatReturnsCorrectString) {
    vector<string> symptoms = {"infection", "swelling"};
    Bacteria bacteria("Strep Throat", symptoms, 0.6);

    EXPECT_EQ(bacteria.treat(), "Treating bacterial infection Strep Throat with antibiotics.");
}

TEST(GeneticDiseaseTest, TreatReturnsCorrectString) {
    vector<string> symptoms = {"joint pain", "fatigue"};
    GeneticDisease genetic("Hemophilia", symptoms, 0.0);

    EXPECT_EQ(genetic.treat(), "Hemophilia requires genetic therapy or lifelong management.");
}

TEST(TreatmentFunctionTest, CallsTreatOnAllDerivedClasses) {
    vector<string> symptoms1 = {"headache"}, symptoms2 = {"rash"}, symptoms3 = {"weakness"};
}