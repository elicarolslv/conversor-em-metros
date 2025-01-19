// Evento para calcular e exibir o resultado
document.getElementById("converter-btn").addEventListener("click", function () {
    const metros = parseFloat(document.getElementById("metros").value);

    // Verifica se o valor é válido
    if (isNaN(metros)) {
        document.getElementById("resultado").textContent = "Por favor, insira um valor válido.";
        return;
    }

    // Converte metros para pés
    const pes = metros * 3.3;

    // Exibe o resultado
    document.getElementById("resultado").textContent = `${metros.toFixed(2)} metros equivalem a ${pes.toFixed(2)} pés.`;
});

// Evento para limpar o resultado
document.getElementById("limpar-btn").addEventListener("click", function () {
    document.getElementById("resultado").textContent = ""; // Limpa o resultado
    document.getElementById("metros").value = ""; // Limpa o campo de entrada (opcional)
});
