class BayesianNetwork:
    def __init__(self):
        # Initialize nodes (variables)
        self.nodes = {'D': None, 'I': None, 'G': None}

        # Define CPTs (conditional probability tables)
        self.cpts = {
            'D': {'Hard': 0.6, 'Easy': 0.4},
            'I': {'High': 0.7, 'Low': 0.3},
            'G': {
                ('Hard', 'High'): {'A': 0.8, 'B': 0.15, 'C': 0.05},
                ('Hard', 'Low'): {'A': 0.6, 'B': 0.25, 'C': 0.15},
                ('Easy', 'High'): {'A': 0.9, 'B': 0.08, 'C': 0.02},
                ('Easy', 'Low'): {'A': 0.7, 'B': 0.2, 'C': 0.1}
            }
        }

    def query(self, evidence):
        """
        Perform inference given evidence.
        Evidence format: {'D': 'Hard', 'G': 'A'} (for example)
        """
        posterior = {}
        for grade in ['A', 'B', 'C']:
            prob = 1.0
            for var in self.nodes:
                if var in evidence:
                    prob *= self.cpts[var][evidence[var]]
                else:
                    # Sum over all possible values of unobserved variables
                    sum_over_values = 0.0
                    for value in self.cpts[var]:
                        evidence_copy = evidence.copy()
                        evidence_copy[var] = value
                        sum_over_values += self.cpts[var][value] * self.query(evidence_copy)
                    prob *= sum_over_values
            posterior[grade] = prob

        # Normalize probabilities
        total_prob = sum(posterior.values())
        for grade in posterior:
            posterior[grade] /= total_prob

        return posterior

# Example usage
bn = BayesianNetwork()
evidence = {'G': 'A'}
posterior = bn.query(evidence)
print("Posterior probabilities for grades (given G=A):")
for grade, prob in posterior.items():
    print(f"P(G={grade} | G=A) = {prob:.4f}")
